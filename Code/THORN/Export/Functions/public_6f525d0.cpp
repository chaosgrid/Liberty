#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f525d0);

#define public_6f525e0 _public_6f525e0
#define public_6f525fd _public_6f525fd
#define public_6f52605 _public_6f52605
#define public_6f52638 _public_6f52638
#define public_6f5263f _public_6f5263f

PROC_DECLARE(0x6f525d0, internal_6f525d0, public_6f525d0);
extern "C" NAKED register_t __cdecl internal_6f525d0()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        test ebp, ebp
        push esi
        push edi
        je public_6f52638
        mov ebx, dword ptr ss : [esp+0x14]
        public_6f525e0 : nop
        cmp dword ptr ds : [ebx], 0
        jne public_6f525fd
        push ebx
        call dword ptr ds : [ebx+8]
        add esp, 4
        cmp eax, 0xFFFFFFFF
        je public_6f5263f
        mov ecx, dword ptr ds : [ebx]
        mov eax, dword ptr ds : [ebx+4]
        inc ecx
        dec eax
        mov dword ptr ds : [ebx], ecx
        mov dword ptr ds : [ebx+4], eax
        public_6f525fd : nop
        mov eax, dword ptr ds : [ebx]
        cmp ebp, eax
        jg public_6f52605
        mov eax, ebp
        public_6f52605 : nop
        mov esi, dword ptr ds : [ebx+4]
        mov edi, dword ptr ss : [esp+0x18]
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        mov edx, dword ptr ss : [esp+0x18]
        and ecx, 3
        rep movsb
        mov edi, dword ptr ds : [ebx]
        mov esi, dword ptr ds : [ebx+4]
        sub edi, eax
        add esi, eax
        add edx, eax
        sub ebp, eax
        mov dword ptr ds : [ebx], edi
        mov dword ptr ds : [ebx+4], esi
        mov dword ptr ss : [esp+0x18], edx
        jne public_6f525e0
        public_6f52638 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 
        public_6f5263f : nop
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f525d0)
    }
}

#undef public_6f525e0
#undef public_6f525fd
#undef public_6f52605
#undef public_6f52638
#undef public_6f5263f
