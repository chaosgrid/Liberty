#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6288830);
CLANG_FORWARD_PROC_SYMBOL(public_62aa980);
CLANG_FORWARD_PROC_SYMBOL(public_630ef30);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_62aaa73 _public_62aaa73
#define public_62aaaa5 _public_62aaaa5
#define public_62aaace _public_62aaace
#define public_62aab13 _public_62aab13

PROC_DECLARE(0x62aa980, internal_62aa980, public_62aa980);
extern "C" NAKED register_t __cdecl internal_62aa980()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+0xC]
        sub esp, 0x70
        push ebx
        push esi
        xor al, al
        cmp edx, 0xFFFFFFFF
        push edi
        je public_62aaace
        mov edi, dword ptr ds : [ecx+0x88]
        mov ebx, dword ptr ds : [edi+0x88]
        test ebx, ebx
        je public_62aaace
        mov esi, dword ptr ds : [edi+0x8C]
        sub esi, ebx
        sar esi, 4
        cmp edx, esi
        jae public_62aaace
        mov ebx, dword ptr ss : [esp+0x84]
        mov eax, dword ptr ss : [esp+0x80]
        push ebx
        push eax
        mov eax, dword ptr ds : [edi+0x88]
        shl edx, 4
        mov edx, dword ptr ds : [eax+edx+4]
        mov eax, dword ptr ds : [ecx+4]
        push edx
        push eax
        call public_630ef30
        fld dword ptr ds : [ebx+4]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [ebx+0x10]
        add esp, 0xC
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ds : [ebx+0x1C]
        lea ecx, ss:[esp+0x10]
        fstp dword ptr ss : [esp+0x18]
        fld qword ptr ds : [public_639e2d8]
        lea edx, ss:[esp+0x1C]
        fcos 
        fstp dword ptr ss : [esp+0x28]
        fld qword ptr ds : [public_639e2d8]
        fsin 
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        faddp 
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x14]
        faddp 
        fsqrt 
        fxch 
        fxch 
        fdivp 
        fstp dword ptr ss : [esp]
        push ecx
        push edx
        call public_6288830
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x34], eax
        mov eax, dword ptr ds : [public_63fc2e4]
        add esp, 0xC
        test eax, eax
        mov dword ptr ss : [esp+0x2C], ecx
        mov dword ptr ss : [esp+0x30], edx
        jne public_62aaa73
        call public_6391cf0
        mov dword ptr ds : [public_63fc2e4], eax
        public_62aaa73 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x24]
        push edx
        lea edx, ss:[esp+0x38]
        push edx
        push eax
        call dword ptr ds : [ecx+0x54]
        mov eax, dword ptr ds : [public_63fc2e4]
        test eax, eax
        mov ecx, 9
        lea esi, ss:[esp+0x34]
        lea edi, ss:[esp+0x58]
        rep movsd
        jne public_62aaaa5
        call public_6391cf0
        mov dword ptr ds : [public_63fc2e4], eax
        public_62aaaa5 : nop
        mov ecx, dword ptr ds : [eax]
        push ebx
        lea edx, ss:[esp+0x5C]
        push edx
        lea edx, ss:[esp+0x3C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x20]
        mov edi, ebx
        mov ecx, 9
        lea esi, ss:[esp+0x34]
        rep movsd
        pop edi
        pop esi
        mov al, 1
        pop ebx
        add esp, 0x70
        ret 0xC
        public_62aaace : nop
        mov esi, dword ptr ss : [esp+0x80]
        fld qword ptr ds : [public_639e2d0]
        lea edx, ds:[ecx+0x2C]
        fcos 
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [edx+4]
        mov dword ptr ds : [esi+4], edi
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+8], edx
        mov edx, dword ptr ss : [esp+0x84]
        lea esi, ds:[ecx+8]
        mov edi, edx
        mov ecx, 9
        rep movsd
        lea ecx, ds:[edx+0x18]
        mov edx, 3
        fld qword ptr ds : [public_639e2d0]
        fsin 
        public_62aab13 : nop
        fld dword ptr ds : [ecx-0x18]
        add ecx, 4
        dec edx
        fld st(1)
        fmul dword ptr ds : [ecx-4]
        fld st(1)
        fmul st, st(4)
        faddp 
        fstp dword ptr ds : [ecx-0x1C]
        fld st(2)
        fmul dword ptr ds : [ecx-4]
        fxch 
        fmul st, st(2)
        fsubp 
        fstp dword ptr ds : [ecx-4]
        jne public_62aab13
        pop edi
        fstp st(0)
        pop esi
        fstp st(0)
        pop ebx
        add esp, 0x70
        ret 0xC
        UNREACHABLE_TRAP(0x62aa980)
    }
}

#undef public_62aaa73
#undef public_62aaaa5
#undef public_62aaace
#undef public_62aab13
