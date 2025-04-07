#include "Common-PCH.h"


#define public_631e4bb _public_631e4bb
#define public_631e4e3 _public_631e4e3
#define public_631e4f5 _public_631e4f5
#define public_631e519 _public_631e519
#define public_631e53d _public_631e53d
#define public_631e547 _public_631e547
#define public_631e54d _public_631e54d
#define public_631e555 _public_631e555

PROC_DECLARE(0x631e490, internal_631e490, public_631e490);
extern "C" NAKED register_t __cdecl internal_631e490()
{
    __asm
    {
        sub esp, 0x10
        mov ecx, dword ptr ss : [esp+0x18]
        push ebx
        push ebp
        xor eax, eax
        push esi
        mov esi, dword ptr ds : [ecx+8]
        cmp esi, eax
        push edi
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x10], eax
        je public_631e4bb
        mov ebp, dword ptr ds : [ecx+0xC]
        cmp ebp, eax
        jne public_631e4e3
        public_631e4bb : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        mov esi, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [esp+0x24]
        mov edx, eax
        mov dword ptr ds : [edx], esi
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [ecx+8]
        pop edi
        mov dword ptr ds : [edx+8], esi
        mov ecx, dword ptr ds : [ecx+0xC]
        pop esi
        pop ebp
        mov dword ptr ds : [edx+0xC], ecx
        pop ebx
        add esp, 0x10
        ret 
        public_631e4e3 : nop
        mov edx, dword ptr ss : [esp+0x2C]
        mov edi, dword ptr ds : [edx+8]
        cmp edi, eax
        je public_631e4f5
        mov ebx, dword ptr ds : [edx+0xC]
        cmp ebx, eax
        jne public_631e519
        public_631e4f5 : nop
        mov esi, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [esp+0x24]
        mov edx, eax
        mov dword ptr ds : [edx], esi
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [ecx+8]
        pop edi
        mov dword ptr ds : [edx+8], esi
        mov ecx, dword ptr ds : [ecx+0xC]
        pop esi
        pop ebp
        mov dword ptr ds : [edx+0xC], ecx
        pop ebx
        add esp, 0x10
        ret 
        public_631e519 : nop
        mov eax, dword ptr ds : [ecx]
        lea esi, ds:[eax+esi-1]
        mov dword ptr ss : [esp+0x2C], esi
        mov esi, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        mov edx, dword ptr ds : [edx+4]
        lea ebp, ds:[esi+ebp-1]
        lea edi, ds:[ecx+edi-1]
        lea ebx, ds:[edx+ebx-1]
        jge public_631e53d
        mov ecx, eax
        public_631e53d : nop
        mov eax, dword ptr ss : [esp+0x2C]
        cmp eax, edi
        jle public_631e547
        mov edi, eax
        public_631e547 : nop
        cmp esi, edx
        jl public_631e54d
        mov esi, edx
        public_631e54d : nop
        cmp ebp, ebx
        mov edx, ebp
        jg public_631e555
        mov edx, ebx
        public_631e555 : nop
        mov eax, dword ptr ss : [esp+0x24]
        sub edi, ecx
        mov ebx, eax
        mov dword ptr ds : [ebx], ecx
        mov dword ptr ds : [ebx+4], esi
        inc edi
        mov dword ptr ds : [ebx+8], edi
        pop edi
        sub edx, esi
        pop esi
        inc edx
        pop ebp
        mov dword ptr ds : [ebx+0xC], edx
        pop ebx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x631e490)
    }
}

#undef public_631e4bb
#undef public_631e4e3
#undef public_631e4f5
#undef public_631e519
#undef public_631e53d
#undef public_631e547
#undef public_631e54d
#undef public_631e555
