#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6220a60);
CLANG_FORWARD_PROC_SYMBOL(public_6220e80);
CLANG_FORWARD_PROC_SYMBOL(public_6221f60);
CLANG_FORWARD_PROC_SYMBOL(public_6221f90);
CLANG_FORWARD_PROC_SYMBOL(public_6222bc0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);

#define public_621e9ab _public_621e9ab
#define public_621e9b9 _public_621e9b9
#define public_621e9c0 _public_621e9c0
#define public_621e9f9 _public_621e9f9
#define public_621e9fe _public_621e9fe
#define public_621ea06 _public_621ea06
#define public_621ea13 _public_621ea13
#define public_621ea18 _public_621ea18
#define public_621ea24 _public_621ea24
#define public_621ea3d _public_621ea3d
#define public_621ea51 _public_621ea51
#define public_621eab6 _public_621eab6
#define public_621eaf5 _public_621eaf5
#define public_621eb0b _public_621eb0b
#define public_621eb20 _public_621eb20
#define public_621eb35 _public_621eb35
#define public_621eb3c _public_621eb3c
#define public_621eb50 _public_621eb50

PROC_DECLARE(0x621e990, internal_621e990, public_621e990);
extern "C" NAKED register_t __cdecl internal_621e990()
{
    __asm
    {
        sub esp, 8
        mov ecx, dword ptr ss : [esp+0x10]
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        push edi
        mov edx, dword ptr ds : [esi+0x2C]
        mov eax, dword ptr ds : [esi+0x28]
        cmp eax, edx
        je public_621e9c0
        mov edi, dword ptr ds : [ecx]
        public_621e9ab : nop
        cmp edi, dword ptr ds : [eax]
        jne public_621e9b9
        mov ebx, dword ptr ds : [ecx+4]
        mov ebp, dword ptr ds : [eax+4]
        cmp ebx, ebp
        je public_621ea06
        public_621e9b9 : nop
        add eax, 8
        cmp eax, edx
        jne public_621e9ab
        public_621e9c0 : nop
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [esi+0x30]
        mov ecx, dword ptr ds : [ecx+4]
        add esi, 0x24
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x14], ecx
        mov eax, dword ptr ds : [esi+8]
        sub edx, eax
        mov edi, eax
        sar edx, 3
        cmp edx, 1
        jae public_621eab6
        mov edx, dword ptr ds : [esi+4]
        test edx, edx
        je public_621e9f9
        mov ecx, eax
        sub ecx, edx
        sar ecx, 3
        cmp ecx, 1
        ja public_621e9fe
        public_621e9f9 : nop
        mov ecx, 1
        public_621e9fe : nop
        test edx, edx
        jne public_621ea13
        xor eax, eax
        jmp public_621ea18
        public_621ea06 : nop
        pop edi
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        add esp, 8
        ret 8
        public_621ea13 : nop
        sub eax, edx
        sar eax, 3
        public_621ea18 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x20], eax
        jge public_621ea24
        xor eax, eax
        public_621ea24 : nop
        shl eax, 3
        push eax
        call public_624612c
        mov ebx, dword ptr ds : [esi+4]
        add esp, 4
        cmp ebx, edi
        mov dword ptr ss : [esp+0x1C], eax
        mov ebp, eax
        je public_621ea51
        public_621ea3d : nop
        push ebx
        push ebp
        call public_6222bc0
        add ebx, 8
        add esp, 8
        add ebp, 8
        cmp ebx, edi
        jne public_621ea3d
        public_621ea51 : nop
        lea ecx, ss:[esp+0x10]
        push ecx
        push 1
        push ebp
        mov ecx, esi
        call public_6221f90
        mov edx, dword ptr ds : [esi+8]
        add ebp, 8
        push ebp
        push edx
        push edi
        mov ecx, esi
        call public_6221f60
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+4]
        push eax
        push ecx
        mov ecx, esi
        call public_6220e80
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_62460e0
        mov edi, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 4
        lea ecx, ds:[edi+eax*8]
        mov dword ptr ds : [esi+0xC], ecx
        mov ecx, esi
        call public_6220a60
        lea edx, ds:[edi+eax*8+8]
        mov dword ptr ds : [esi+4], edi
        mov dword ptr ds : [esi+8], edx
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 8
        ret 8
        public_621eab6 : nop
        mov ecx, eax
        sub ecx, edi
        sar ecx, 3
        cmp ecx, 1
        mov ecx, esi
        jae public_621eb0b
        lea edx, ds:[edi+8]
        push edx
        push eax
        push edi
        call public_6221f60
        mov eax, dword ptr ds : [esi+8]
        lea ecx, ss:[esp+0x10]
        mov edx, eax
        push ecx
        sub edx, edi
        mov ecx, 1
        sar edx, 3
        sub ecx, edx
        push ecx
        push eax
        mov ecx, esi
        call public_6221f90
        mov eax, dword ptr ds : [esi+8]
        cmp edi, eax
        je public_621eb50
        public_621eaf5 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edi], edx
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edi+4], ecx
        add edi, 8
        cmp edi, eax
        jne public_621eaf5
        jmp public_621eb50
        public_621eb0b : nop
        push eax
        push eax
        add eax, 0xFFFFFFF8
        push eax
        call public_6221f60
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[ecx-8]
        cmp edi, eax
        je public_621eb35
        public_621eb20 : nop
        mov edx, dword ptr ds : [eax-8]
        sub eax, 8
        sub ecx, 8
        cmp eax, edi
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        jne public_621eb20
        public_621eb35 : nop
        lea eax, ds:[edi+8]
        cmp edi, eax
        je public_621eb50
        public_621eb3c : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edi], ecx
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edi+4], edx
        add edi, 8
        cmp edi, eax
        jne public_621eb3c
        public_621eb50 : nop
        mov eax, dword ptr ds : [esi+8]
        pop edi
        add eax, 8
        mov dword ptr ds : [esi+8], eax
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x621e990)
    }
}

#undef public_621e9ab
#undef public_621e9b9
#undef public_621e9c0
#undef public_621e9f9
#undef public_621e9fe
#undef public_621ea06
#undef public_621ea13
#undef public_621ea18
#undef public_621ea24
#undef public_621ea3d
#undef public_621ea51
#undef public_621eab6
#undef public_621eaf5
#undef public_621eb0b
#undef public_621eb20
#undef public_621eb35
#undef public_621eb3c
#undef public_621eb50
