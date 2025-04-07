#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f28e70);

#define public_6f28e87 _public_6f28e87
#define public_6f28e92 _public_6f28e92
#define public_6f28eaa _public_6f28eaa
#define public_6f28ec7 _public_6f28ec7
#define public_6f28ed6 _public_6f28ed6

PROC_DECLARE(0x6f28e70, internal_6f28e70, public_6f28e70);
extern "C" NAKED register_t __cdecl internal_6f28e70()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        cmp edx, dword ptr ss : [esp+8]
        je public_6f28ed6
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        push ebp
        push esi
        push edi
        lea ebp, ds:[eax+4]
        xor ecx, ecx
        public_6f28e87 : nop
        cmp ebp, ecx
        jne public_6f28e92
        mov dword ptr ds : [edx], ecx
        mov byte ptr ds : [edx+4], cl
        jmp public_6f28ec7
        public_6f28e92 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, ebp
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        jb public_6f28eaa
        mov eax, 0x2F
        public_6f28eaa : nop
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov esi, ebp
        lea edi, ds:[edx+4]
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        xor ecx, ecx
        mov byte ptr ds : [eax+edx+4], cl
        mov dword ptr ds : [edx], eax
        public_6f28ec7 : nop
        mov eax, dword ptr ss : [esp+0x18]
        add edx, 0x34
        cmp edx, eax
        jne public_6f28e87
        pop edi
        pop esi
        pop ebp
        pop ebx
        public_6f28ed6 : nop
        ret 
        UNREACHABLE_TRAP(0x6f28e70)
    }
}

#undef public_6f28e87
#undef public_6f28e92
#undef public_6f28eaa
#undef public_6f28ec7
#undef public_6f28ed6
