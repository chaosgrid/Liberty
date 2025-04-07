#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b5e00);

#define public_629f7e5 _public_629f7e5
#define public_629f7f6 _public_629f7f6
#define public_629f876 _public_629f876

PROC_DECLARE(0x629f7c0, internal_629f7c0, public_629f7c0);
extern "C" NAKED register_t __cdecl internal_629f7c0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov ebx, dword ptr ds : [esi-0x1C]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        add ebx, 0xB0
        call dword ptr ds : [eax+0x20]
        cmp eax, dword ptr ds : [ebx]
        jne public_629f7e5
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 4
        public_629f7e5 : nop
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x34]
        test al, al
        jne public_629f7f6
        pop edi
        pop esi
        pop ebx
        ret 4
        public_629f7f6 : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x9C]
        fstp dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [esi-0x1C]
        call public_62b5e00
        fcomp dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 5
        jp public_629f876
        fld dword ptr ds : [public_639a1d0]
        mov ecx, dword ptr ds : [esi-0x14]
        fsub dword ptr ss : [esp+0x10]
        mov esi, dword ptr ds : [esi-0x1C]
        mov edx, dword ptr ds : [edi]
        add esi, 0x2C
        fmul dword ptr ds : [ecx+0x74]
        mov ecx, edi
        fstp dword ptr ss : [esp+0x10]
        call dword ptr ds : [edx]
        fld dword ptr ds : [eax]
        fsub dword ptr ds : [esi]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ds : [esi+4]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ds : [esi+8]
        fld st(2)
        fmul st, st(3)
        fld st(1)
        fmul st, st(2)
        faddp 
        fld st(2)
        fmul st, st(3)
        faddp 
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        fcompp 
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 5
        fstp st(0)
        jp public_629f876
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 4
        public_629f876 : nop
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x629f7c0)
    }
}

#undef public_629f7e5
#undef public_629f7f6
#undef public_629f876
