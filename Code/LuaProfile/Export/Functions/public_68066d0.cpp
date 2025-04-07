#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_68066d0);

#define public_68066e0 _public_68066e0
#define public_68066fd _public_68066fd
#define public_6806705 _public_6806705
#define public_6806738 _public_6806738
#define public_680673f _public_680673f

PROC_DECLARE(0x68066d0, internal_68066d0, public_68066d0);
extern "C" NAKED register_t __cdecl internal_68066d0()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        test ebp, ebp
        push esi
        push edi
        je public_6806738
        mov ebx, dword ptr ss : [esp+0x14]
        public_68066e0 : nop
        cmp dword ptr ds : [ebx], 0
        jne public_68066fd
        push ebx
        call dword ptr ds : [ebx+8]
        add esp, 4
        cmp eax, 0xFFFFFFFF
        je public_680673f
        mov ecx, dword ptr ds : [ebx]
        mov eax, dword ptr ds : [ebx+4]
        inc ecx
        dec eax
        mov dword ptr ds : [ebx], ecx
        mov dword ptr ds : [ebx+4], eax
        public_68066fd : nop
        mov eax, dword ptr ds : [ebx]
        cmp ebp, eax
        jg public_6806705
        mov eax, ebp
        public_6806705 : nop
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
        jne public_68066e0
        public_6806738 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 
        public_680673f : nop
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x68066d0)
    }
}

#undef public_68066e0
#undef public_68066fd
#undef public_6806705
#undef public_6806738
#undef public_680673f
