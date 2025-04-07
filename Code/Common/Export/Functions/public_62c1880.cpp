#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62c1880);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_62c1896 _public_62c1896
#define public_62c1898 _public_62c1898
#define public_62c1902 _public_62c1902
#define public_62c1991 _public_62c1991
#define public_62c19aa _public_62c19aa

PROC_DECLARE(0x62c1880, internal_62c1880, public_62c1880);
extern "C" NAKED register_t __cdecl internal_62c1880()
{
    __asm
    {
        sub esp, 0xA0
        mov eax, dword ptr ds : [ecx+0x18]
        test eax, eax
        mov dword ptr ss : [esp+0xC], ecx
        je public_62c1896
        lea ecx, ds:[eax-8]
        jmp public_62c1898
        public_62c1896 : nop
        xor ecx, ecx
        public_62c1898 : nop
        mov eax, dword ptr ds : [ecx]
        push ebx
        push ebp
        push esi
        push edi
        call dword ptr ds : [eax+0x10]
        mov edi, dword ptr ss : [esp+0xB4]
        mov ebx, dword ptr ss : [esp+0xB8]
        lea eax, ss:[esp+0x44]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        mov dword ptr ds : [ebx], edi
        mov edx, dword ptr ds : [edi]
/*FIXUP push offset public_639f42c @0x62c18bd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639f42c
        mov ecx, edi
        call dword ptr ds : [edx+0xC0]
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x18]
        lea esi, ds:[ebx+0x28]
        mov ebp, esi
        mov dword ptr ss : [ebp], eax
        mov dword ptr ss : [ebp+4], ecx
        mov dword ptr ss : [ebp+8], edx
        mov ebp, dword ptr ss : [esp+0x1C]
        cmp byte ptr ss : [ebp+0x96], 0
        je public_62c1902
        mov dword ptr ds : [esi], eax
        mov dword ptr ds : [esi+4], ecx
        mov dword ptr ds : [esi+8], edx
        lea esi, ss:[esp+0x44]
        jmp public_62c19aa
        public_62c1902 : nop
        mov edx, dword ptr ds : [edi]
        lea eax, ss:[esp+0x8C]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
/*FIXUP push offset public_639f420 @0x62c1911*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639f420
        mov ecx, edi
        call dword ptr ds : [edx+0xC0]
        fld qword ptr ds : [public_639e2d0]
        fcos 
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], ecx
        mov eax, dword ptr ds : [public_63fc504]
        test eax, eax
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x30], 0x3F800000
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x3C], 0
        fld qword ptr ds : [public_639e2d0]
        fsin 
        fld st(1)
        fstp dword ptr ss : [esp+0x20]
        fst dword ptr ss : [esp+0x28]
        fchs 
        fstp dword ptr ss : [esp+0x38]
        fstp dword ptr ss : [esp+0x40]
        jne public_62c1991
        call public_6391cf0
        mov dword ptr ds : [public_63fc504], eax
        public_62c1991 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x44]
        push ecx
        lea ecx, ss:[esp+0x24]
        push ecx
        lea ecx, ss:[esp+0x70]
        push ecx
        push eax
        call dword ptr ds : [edx+0x20]
        lea esi, ss:[esp+0x68]
        public_62c19aa : nop
        lea edi, ds:[ebx+4]
        mov ecx, 9
        rep movsd
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xA0
        ret 8
        UNREACHABLE_TRAP(0x62c1880)
    }
}

#undef public_62c1896
#undef public_62c1898
#undef public_62c1902
#undef public_62c1991
#undef public_62c19aa
