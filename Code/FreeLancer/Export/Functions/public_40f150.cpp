#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40f150);

#define public_40f2b4 _public_40f2b4
#define public_40f344 _public_40f344

PROC_DECLARE(0x40f150, internal_40f150, public_40f150);
extern "C" NAKED register_t __cdecl internal_40f150()
{
    __asm
    {
        push ecx
        xor edx, edx
        mov dword ptr ds : [ecx+0x20], edx
        mov dword ptr ds : [ecx+0x1C], edx
        mov dword ptr ds : [ecx+0x18], edx
        mov dword ptr ds : [ecx+0x10], edx
        mov dword ptr ds : [ecx+0xC], edx
        mov dword ptr ds : [ecx+8], edx
        push esi
        mov esi, 0x3F800000
        mov dword ptr ds : [ecx+0x24], esi
        mov dword ptr ds : [ecx+0x14], esi
        mov dword ptr ds : [ecx+4], esi
        mov dword ptr ds : [ecx+0x30], edx
        mov dword ptr ds : [ecx+0x2C], edx
        mov dword ptr ds : [ecx+0x28], edx
        mov dword ptr ds : [ecx+0x58], esi
        mov dword ptr ds : [ecx+0x48], esi
        mov dword ptr ds : [ecx+0x38], esi
        mov dword ptr ds : [ecx+0x54], edx
        mov dword ptr ds : [ecx+0x50], edx
        mov dword ptr ds : [ecx+0x4C], edx
        mov dword ptr ds : [ecx+0x44], edx
        mov dword ptr ds : [ecx+0x40], edx
        mov dword ptr ds : [ecx+0x3C], edx
        mov dword ptr ds : [ecx+0x64], edx
        mov dword ptr ds : [ecx+0x60], edx
        mov dword ptr ds : [ecx+0x5C], edx
        mov dword ptr ds : [ecx], offset public_5c8944
        mov dword ptr ds : [ecx+0x24], esi
        mov dword ptr ds : [ecx+0x14], esi
        mov dword ptr ds : [ecx+4], esi
        mov dword ptr ds : [ecx+0x20], edx
        mov dword ptr ds : [ecx+0x1C], edx
        mov dword ptr ds : [ecx+0x18], edx
        mov dword ptr ds : [ecx+0x10], edx
        mov dword ptr ds : [ecx+0xC], edx
        mov dword ptr ds : [ecx+8], edx
        mov dword ptr ds : [ecx+0x30], edx
        mov dword ptr ds : [ecx+0x2C], edx
        mov dword ptr ds : [ecx+0x28], edx
        mov byte ptr ds : [ecx+0x34], 1
        mov byte ptr ds : [ecx+0xBC], dl
        mov dword ptr ds : [ecx+0xA0], 0x3FAAAAAB
        fld dword ptr ds : [public_610534]
        fld dword ptr ds : [public_610530]
        mov dword ptr ds : [ecx+0x70], 0x43A00000
        fstp dword ptr ds : [ecx+0xA4]
        mov dword ptr ds : [ecx+0x74], 0x43700000
        fstp dword ptr ds : [ecx+0xA8]
        mov dword ptr ds : [ecx+0x98], 0x420C0000
        fld qword ptr ds : [public_5c8938]
        fptan 
        fstp st(0)
        fld dword ptr ds : [public_5c8930]
        fmul st, st(1)
        fst dword ptr ss : [esp+4]
        fld1 
        fpatan 
        fmul qword ptr ds : [public_5c8928]
        fstp dword ptr ds : [ecx+0x9C]
        mov dword ptr ds : [ecx+0x80], esi
        mov dword ptr ds : [ecx+0x84], edx
        fst dword ptr ds : [ecx+0x88]
        fld dword ptr ds : [ecx+0x88]
        fld dword ptr ds : [ecx+0x84]
        fld dword ptr ds : [ecx+0x80]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fsqrt 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fdivr dword ptr ds : [public_5c75dc]
        fld st(0)
        fmul dword ptr ds : [ecx+0x80]
        fstp dword ptr ds : [ecx+0x80]
        fld st(0)
        fmul dword ptr ds : [ecx+0x84]
        fstp dword ptr ds : [ecx+0x84]
        fmul dword ptr ds : [ecx+0x88]
        fstp dword ptr ds : [ecx+0x88]
        fcom dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_40f2b4
        fld dword ptr ds : [ecx+0x70]
        fdiv st, st(1)
        fstp dword ptr ds : [ecx+0x78]
        public_40f2b4 : nop
        mov eax, dword ptr ss : [esp+4]
        fstp st(0)
        mov dword ptr ds : [ecx+0x94], eax
        mov dword ptr ds : [ecx+0x90], esi
        mov dword ptr ds : [ecx+0x8C], edx
        fld dword ptr ds : [ecx+0x94]
        fld dword ptr ds : [ecx+0x90]
        pop esi
        fld dword ptr ds : [ecx+0x8C]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fsqrt 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fdivr dword ptr ds : [public_5c75dc]
        fld st(0)
        fmul dword ptr ds : [ecx+0x8C]
        fstp dword ptr ds : [ecx+0x8C]
        fld st(0)
        fmul dword ptr ds : [ecx+0x90]
        fstp dword ptr ds : [ecx+0x90]
        fmul dword ptr ds : [ecx+0x94]
        fstp dword ptr ds : [ecx+0x94]
        fld dword ptr ss : [esp]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        mov eax, ecx
        jne public_40f344
        fld dword ptr ds : [ecx+0x74]
        fdiv dword ptr ss : [esp]
        fchs 
        fstp dword ptr ds : [ecx+0x7C]
        public_40f344 : nop
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x40f150)
    }
}

#undef public_40f2b4
#undef public_40f344
