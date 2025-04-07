#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f22800);

#define public_6f2281a _public_6f2281a
#define public_6f22835 _public_6f22835
#define public_6f22852 _public_6f22852
#define public_6f22861 _public_6f22861
#define public_6f2287c _public_6f2287c
#define public_6f22899 _public_6f22899

PROC_DECLARE(0x6f22800, internal_6f22800, public_6f22800);
extern "C" NAKED register_t __cdecl internal_6f22800()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push ebp
        push esi
        mov edx, ecx
        lea esi, ds:[eax+4]
        xor ecx, ecx
        cmp esi, ecx
        push edi
        jne public_6f2281a
        mov dword ptr ds : [edx], ecx
        mov byte ptr ds : [edx+4], cl
        jmp public_6f22852
        public_6f2281a : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea ebp, ds:[edx+4]
        jb public_6f22835
        mov eax, 0x2F
        public_6f22835 : nop
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov edi, ebp
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        xor ecx, ecx
        mov byte ptr ds : [eax+ebp], cl
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x14]
        public_6f22852 : nop
        lea esi, ds:[eax+0x38]
        cmp esi, ecx
        jne public_6f22861
        mov dword ptr ds : [edx+0x34], ecx
        mov byte ptr ds : [edx+0x38], cl
        jmp public_6f22899
        public_6f22861 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        lea ebp, ds:[edx+0x38]
        jb public_6f2287c
        mov eax, 0x2F
        public_6f2287c : nop
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov edi, ebp
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+ebp], 0
        mov dword ptr ds : [edx+0x34], eax
        mov eax, dword ptr ss : [esp+0x14]
        public_6f22899 : nop
        mov ecx, dword ptr ds : [eax+0x68]
        mov dword ptr ds : [edx+0x68], ecx
        mov ecx, dword ptr ds : [eax+0x6C]
        pop edi
        pop esi
        mov dword ptr ds : [edx+0x6C], ecx
        mov eax, dword ptr ds : [eax+0x70]
        pop ebp
        mov dword ptr ds : [edx+0x70], eax
        mov eax, edx
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f22800)
    }
}

#undef public_6f2281a
#undef public_6f22835
#undef public_6f22852
#undef public_6f22861
#undef public_6f2287c
#undef public_6f22899
