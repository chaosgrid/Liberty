#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3fd10);

#define public_6f3fd25 _public_6f3fd25
#define public_6f3fd34 _public_6f3fd34
#define public_6f3fd40 _public_6f3fd40
#define public_6f3fd49 _public_6f3fd49
#define public_6f3fd6b _public_6f3fd6b
#define public_6f3fd72 _public_6f3fd72

PROC_DECLARE(0x6f3fd10, internal_6f3fd10, public_6f3fd10);
extern "C" NAKED register_t __cdecl internal_6f3fd10()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push ebp
        push esi
        push edi
        mov edi, ecx
        cmp dword ptr ds : [edi+8], ebx
        jae public_6f3fd25
        call dword ptr ds : [public_6f5a044]
        public_6f3fd25 : nop
        mov eax, dword ptr ds : [edi+8]
        mov esi, dword ptr ss : [esp+0x18]
        sub eax, ebx
        cmp eax, esi
        jae public_6f3fd34
        mov esi, eax
        public_6f3fd34 : nop
        mov ebp, dword ptr ss : [esp+0x20]
        cmp esi, ebp
        mov ecx, esi
        jb public_6f3fd40
        mov ecx, ebp
        public_6f3fd40 : nop
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        je public_6f3fd49
        add eax, ebx
        public_6f3fd49 : nop
        push ecx
        mov ecx, dword ptr ss : [esp+0x20]
        push ecx
        push eax
        call dword ptr ds : [public_6f5a08c]
        add esp, 0xC
        test eax, eax
        jne public_6f3fd72
        cmp esi, ebp
        jae public_6f3fd6b
        pop edi
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        ret 0x10
        public_6f3fd6b : nop
        xor eax, eax
        cmp esi, ebp
        setne al
        public_6f3fd72 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6f3fd10)
    }
}

#undef public_6f3fd25
#undef public_6f3fd34
#undef public_6f3fd40
#undef public_6f3fd49
#undef public_6f3fd6b
#undef public_6f3fd72
