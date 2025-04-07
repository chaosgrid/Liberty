#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_6299c76 _public_6299c76
#define public_6299c86 _public_6299c86
#define public_6299c92 _public_6299c92
#define public_6299ce9 _public_6299ce9
#define public_6299d19 _public_6299d19
#define public_6299d49 _public_6299d49

PROC_DECLARE(0x6299c40, internal_6299c40, public_6299c40);
extern "C" NAKED register_t __cdecl internal_6299c40()
{
    __asm
    {
        sub esp, 0x5C
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x54]
        lea ebx, ds:[esi+0x54]
        xor eax, eax
        cmp ecx, 0xFFFFFFFF
        mov dword ptr ss : [esp+0xC], esi
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+8], eax
        je public_6299c86
        mov ecx, ebx
        public_6299c76 : nop
        mov edx, dword ptr ds : [ecx+0x34]
        add ecx, 0x34
        inc eax
        cmp edx, 0xFFFFFFFF
        jne public_6299c76
        mov dword ptr ss : [esp+8], eax
        public_6299c86 : nop
        test eax, eax
        jle public_6299d49
        push ebp
        push edi
        mov ebp, eax
        public_6299c92 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x2C], 0
        call dword ptr ds : [eax+8]
        test al, al
        jne public_6299d19
        mov ecx, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0xA0]
        mov esi, eax
        mov eax, dword ptr ds : [public_63fc194]
        test eax, eax
        mov ecx, 0xC
        lea edi, ss:[esp+0x3C]
        rep movsd
        jne public_6299ce9
        call public_6391cf0
        mov dword ptr ds : [public_63fc194], eax
        public_6299ce9 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[ebx+0x28]
        push ecx
        lea ecx, ss:[esp+0x40]
        push ecx
        lea ecx, ss:[esp+0x38]
        push ecx
        push eax
        call dword ptr ds : [edx+0x28]
        mov edx, dword ptr ss : [esp+0x30]
        mov eax, dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ss : [esp+0x38]
        mov esi, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x24], edx
        mov dword ptr ss : [esp+0x28], eax
        mov dword ptr ss : [esp+0x2C], ecx
        public_6299d19 : nop
        fld dword ptr ss : [esp+0x24]
        add ebx, 0x34
        dec ebp
        fadd dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x28]
        fadd dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x2C]
        fadd dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+0x20]
        jne public_6299c92
        pop edi
        pop ebp
        public_6299d49 : nop
        fild dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+0x68]
        mov edx, eax
        pop esi
        fdivr dword ptr ds : [public_639a1d0]
        pop ebx
        fld dword ptr ss : [esp+8]
        fmul st, st(1)
        fstp dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0xC]
        mov dword ptr ds : [edx], ecx
        fmul st, st(1)
        fstp dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx+4], ecx
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx+8], ecx
        fstp st(0)
        add esp, 0x5C
        ret 4
        UNREACHABLE_TRAP(0x6299c40)
    }
}

#undef public_6299c76
#undef public_6299c86
#undef public_6299c92
#undef public_6299ce9
#undef public_6299d19
#undef public_6299d49
