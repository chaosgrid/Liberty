#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6341610);

#define public_6294973 _public_6294973
#define public_6294986 _public_6294986
#define public_6294988 _public_6294988
#define public_6294994 _public_6294994

PROC_DECLARE(0x6294960, internal_6294960, public_6294960);
extern "C" NAKED register_t __cdecl internal_6294960()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov ebx, ecx
        mov esi, ebx
        sub edi, ebx
        mov ebp, 0x100
        public_6294973 : nop
        mov eax, dword ptr ds : [edi+esi]
        test eax, eax
        je public_6294986
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_6294986
        add eax, 8
        jmp public_6294988
        public_6294986 : nop
        xor eax, eax
        public_6294988 : nop
        cmp eax, dword ptr ds : [esi]
        je public_6294994
        push eax
        mov ecx, esi
        call public_6341610
        public_6294994 : nop
        add esi, 8
        dec ebp
        jne public_6294973
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax+0x800]
        pop edi
        mov dword ptr ds : [ebx+0x800], ecx
        mov edx, dword ptr ds : [eax+0x804]
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+0x804], edx
        mov eax, ebx
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6294960)
    }
}

#undef public_6294973
#undef public_6294986
#undef public_6294988
#undef public_6294994
