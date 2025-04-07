#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf5020);

#define public_6cf504b _public_6cf504b
#define public_6cf505c _public_6cf505c
#define public_6cf505e _public_6cf505e
#define public_6cf50b5 _public_6cf50b5
#define public_6cf50d5 _public_6cf50d5
#define public_6cf5115 _public_6cf5115
#define public_6cf5116 _public_6cf5116
#define public_6cf5120 _public_6cf5120

PROC_DECLARE(0x6cf5020, internal_6cf5020, public_6cf5020);
extern "C" NAKED register_t __cdecl internal_6cf5020()
{
    __asm
    {
        sub esp, 8
        fld dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x18]
        push ebx
        push ebp
        push esi
        push edi
        fstp dword ptr ss : [esp+0x14]
        xor edi, edi
        xor ebx, ebx
        test eax, eax
        mov dword ptr ss : [esp+0x10], ecx
        jbe public_6cf5120
        mov ebp, dword ptr ss : [esp+0x24]
        public_6cf504b : nop
        test ebx, ebx
        mov edx, dword ptr ss : [esp+0x2C]
        jne public_6cf505c
        mov eax, dword ptr ss : [esp+0x10]
        mov ebx, dword ptr ds : [eax+4]
        jmp public_6cf505e
        public_6cf505c : nop
        mov ebx, dword ptr ds : [ebx]
        public_6cf505e : nop
        test ebx, ebx
        je public_6cf5120
        mov ecx, dword ptr ds : [ebx+8]
        test ecx, ecx
        je public_6cf5116
        lea eax, ds:[ecx+0xC]
        test eax, eax
        je public_6cf5116
        mov esi, dword ptr ds : [eax+4]
        test esi, esi
        je public_6cf5116
        mov eax, dword ptr ds : [esi+0x4C]
        and eax, 3
        cmp al, 3
        jne public_6cf5116
        test dword ptr ds : [esi+0xE0], edx
        je public_6cf5116
        test edx, 0x7F0000
        je public_6cf50b5
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x160]
        test al, al
        mov ebp, dword ptr ss : [esp+0x24]
        jne public_6cf5116
        public_6cf50b5 : nop
        fld dword ptr ss : [esp+0x28]
        fcomp qword ptr ds : [public_6d65538]
        fnstsw ax
        test ah, 5
        jp public_6cf50d5
        mov eax, dword ptr ds : [esi+0xB0]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx+edi*4], eax
        jmp public_6cf5115
        public_6cf50d5 : nop
        fld dword ptr ss : [ebp]
        fsub dword ptr ds : [esi+0x2C]
        fld dword ptr ss : [ebp+4]
        fsub dword ptr ds : [esi+0x30]
        fld dword ptr ss : [ebp+8]
        fsub dword ptr ds : [esi+0x34]
        fld st(2)
        fmul st, st(3)
        fld st(1)
        fmul st, st(2)
        faddp 
        fld st(2)
        fmul st, st(3)
        faddp 
        fcomp dword ptr ss : [esp+0x14]
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        fstp st(0)
        jp public_6cf5116
        mov edx, dword ptr ds : [esi+0xB0]
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax+edi*4], edx
        public_6cf5115 : nop
        inc edi
        public_6cf5116 : nop
        cmp edi, dword ptr ss : [esp+0x20]
        jb public_6cf504b
        public_6cf5120 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0x14
        UNREACHABLE_TRAP(0x6cf5020)
    }
}

#undef public_6cf504b
#undef public_6cf505c
#undef public_6cf505e
#undef public_6cf50b5
#undef public_6cf50d5
#undef public_6cf5115
#undef public_6cf5116
#undef public_6cf5120
