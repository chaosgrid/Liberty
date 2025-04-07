#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636ec10);
CLANG_FORWARD_PROC_SYMBOL(public_636ec70);
CLANG_FORWARD_PROC_SYMBOL(public_636ecc0);
CLANG_FORWARD_PROC_SYMBOL(public_636eed0);
CLANG_FORWARD_PROC_SYMBOL(public_6373fa0);
CLANG_FORWARD_PROC_SYMBOL(public_6374610);
CLANG_FORWARD_PROC_SYMBOL(public_6385600);
CLANG_FORWARD_PROC_SYMBOL(public_6385ea0);
CLANG_FORWARD_PROC_SYMBOL(public_6386380);
CLANG_FORWARD_PROC_SYMBOL(public_63869e0);
CLANG_FORWARD_PROC_SYMBOL(public_638bcb0);

#define public_638bd72 _public_638bd72
#define public_638bd8d _public_638bd8d
#define public_638bd91 _public_638bd91
#define public_638bdab _public_638bdab
#define public_638bdc3 _public_638bdc3
#define public_638bdca _public_638bdca
#define public_638bddb _public_638bddb
#define public_638bdee _public_638bdee
#define public_638be06 _public_638be06
#define public_638be0f _public_638be0f
#define public_638be3c _public_638be3c
#define public_638be7d _public_638be7d
#define public_638be9a _public_638be9a
#define public_638beae _public_638beae
#define public_638beba _public_638beba
#define public_638bebf _public_638bebf
#define public_638bed4 _public_638bed4
#define public_638bee5 _public_638bee5
#define public_638befc _public_638befc
#define public_638bf01 _public_638bf01
#define public_638bf17 _public_638bf17
#define public_638bf2a _public_638bf2a
#define public_638bf48 _public_638bf48
#define public_638bf6c _public_638bf6c

PROC_DECLARE(0x638bcb0, internal_638bcb0, public_638bcb0);
extern "C" NAKED register_t __cdecl internal_638bcb0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_658b8fc]
        sub esp, 0x20
        push esi
        push eax
        call public_636ec10
        mov ecx, dword ptr ds : [public_658b254]
        mov esi, eax
        mov eax, dword ptr ss : [esp+0x2C]
        add esp, 4
        add esi, ecx
        test eax, eax
        je public_638bf6c
        push ebx
        mov ebx, dword ptr ss : [esp+0x38]
        push ebp
        mov ebp, dword ptr ss : [esp+0x38]
        push edi
        mov edi, dword ptr ss : [esp+0x38]
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea edx, ss:[esp+0x24]
        push edx
        lea eax, ss:[esp+0x2C]
        push eax
        lea ecx, ss:[esp+0x34]
        push ecx
        lea edx, ss:[esp+0x3C]
        push edx
        push ebx
        push ebp
        push edi
        call public_6385600
        mov eax, dword ptr ss : [esp+0x54]
        add esp, 0x20
        push esi
/*FIXUP push offset public_63f7cb4 @0x638bd10*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f7cb4
        push eax
        call dword ptr ds : [public_63991e8]
        call public_6374610
        push ebx
        push ebp
        push edi
        call public_6386380
        push esi
        mov dword ptr ss : [esp+0x34], eax
        call public_636ec70
        push esi
        mov dword ptr ss : [esp+0x34], eax
        call public_636ec70
        mov ecx, dword ptr ss : [esp+0x34]
        push esi
        push 0
        push ecx
        mov dword ptr ss : [esp+0x3C], eax
        call public_636eed0
        mov edx, dword ptr ss : [esp+0x3C]
        push esi
        push 0
        push edx
        call public_636eed0
        mov eax, dword ptr ss : [esp+0x50]
        add esp, 0x38
        test eax, eax
        je public_638bd8d
        lea esi, ds:[eax+4]
        mov eax, dword ptr ds : [esi]
        add esi, 4
        test eax, eax
        je public_638bd8d
        public_638bd72 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        push eax
        mov eax, dword ptr ds : [eax+8]
        push eax
        push ecx
        call public_6373fa0
        mov eax, dword ptr ds : [esi]
        add esp, 0xC
        add esi, 4
        test eax, eax
        jne public_638bd72
        public_638bd8d : nop
        test edi, edi
        je public_638bdca
        public_638bd91 : nop
        mov eax, dword ptr ds : [edi+0x30]
        test eax, eax
        je public_638bdca
        mov eax, dword ptr ds : [edi+0x44]
        test eax, eax
        je public_638bdc3
        lea esi, ds:[eax+4]
        mov eax, dword ptr ds : [esi]
        add esi, 4
        test eax, eax
        je public_638bdc3
        public_638bdab : nop
        mov edx, dword ptr ss : [esp+0x10]
        push edi
        push eax
        push edx
        call public_6373fa0
        mov eax, dword ptr ds : [esi]
        add esp, 0xC
        add esi, 4
        test eax, eax
        jne public_638bdab
        public_638bdc3 : nop
        mov edi, dword ptr ds : [edi+0x30]
        test edi, edi
        jne public_638bd91
        public_638bdca : nop
        test ebp, ebp
        je public_638be0f
        mov edi, dword ptr ss : [ebp+4]
        lea ebx, ss:[ebp+4]
        add ebx, 4
        test edi, edi
        je public_638be0f
        public_638bddb : nop
        mov eax, dword ptr ds : [edi+0x44]
        test eax, eax
        je public_638be06
        lea esi, ds:[eax+4]
        mov eax, dword ptr ds : [esi]
        add esi, 4
        test eax, eax
        je public_638be06
        public_638bdee : nop
        push edi
        push eax
        mov eax, dword ptr ss : [esp+0x18]
        push eax
        call public_6373fa0
        mov eax, dword ptr ds : [esi]
        add esp, 0xC
        add esi, 4
        test eax, eax
        jne public_638bdee
        public_638be06 : nop
        mov edi, dword ptr ds : [ebx]
        add ebx, 4
        test edi, edi
        jne public_638bddb
        public_638be0f : nop
        mov eax, dword ptr ss : [esp+0x14]
        test eax, eax
        je public_638bf48
        mov esi, dword ptr ds : [eax+4]
        push eax
        call public_636ec10
        add esp, 4
        test eax, eax
        jle public_638bf48
        mov edi, 4
        mov dword ptr ss : [esp+0x40], edi
        mov dword ptr ss : [esp+0x3C], eax
        public_638be3c : nop
        test esi, esi
        je public_638bee5
        mov ecx, dword ptr ds : [esi+0xC]
        push ecx
        call public_636ec10
        mov ebp, dword ptr ss : [esp+0x38]
        mov ebx, dword ptr ds : [public_63991e8]
        add esp, 4
        mov edi, eax
        push edi
/*FIXUP push offset public_63a362c @0x638be5d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a362c
        push ebp
        call ebx
        mov eax, dword ptr ds : [public_658b24c]
        add esp, 0xC
        cmp eax, 3
        jne public_638be7d
        push esi
        call public_63869e0
        add esp, 4
        jmp public_638be9a
        public_638be7d : nop
        cmp eax, 4
        jl public_638be9a
        mov edx, dword ptr ds : [esi+0xC]
/*FIXUP push offset _public_6385ea0 @0x638be85*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6385ea0
        push 4
        add edx, 4
        push edi
        push edx
        call dword ptr ds : [public_63992a8]
        add esp, 0x10
        public_638be9a : nop
        mov esi, dword ptr ds : [esi+0xC]
        test esi, esi
        je public_638bed4
        mov eax, dword ptr ds : [esi+4]
        add esi, 4
        add esi, 4
        test eax, eax
        je public_638bed4
        public_638beae : nop
        mov ecx, dword ptr ds : [eax+0x48]
        test ecx, ecx
        je public_638beba
        lea eax, ds:[ecx-1]
        jmp public_638bebf
        public_638beba : nop
        mov eax, dword ptr ds : [eax+0x4C]
        neg eax
        public_638bebf : nop
        push eax
/*FIXUP push offset public_63f10fc @0x638bec0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f10fc
        push ebp
        call ebx
        mov eax, dword ptr ds : [esi]
        add esp, 0xC
        add esi, 4
        test eax, eax
        jne public_638beae
/*FIXUP public_638bed4 : nop
        push offset public_63edccc @0x638bed4*/
  FIXUP public_638bed4 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63edccc
        push ebp
        call ebx
        mov edi, dword ptr ss : [esp+0x48]
        add esp, 8
        jmp public_638bf2a
        public_638bee5 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edi+eax]
        test eax, eax
        je public_638bf17
        mov ecx, dword ptr ds : [eax+0x48]
        test ecx, ecx
        je public_638befc
        lea eax, ds:[ecx-1]
        jmp public_638bf01
        public_638befc : nop
        mov eax, dword ptr ds : [eax+0x4C]
        neg eax
        public_638bf01 : nop
        mov ecx, dword ptr ss : [esp+0x34]
        push eax
/*FIXUP push offset public_63f9dd0 @0x638bf06*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f9dd0
        push ecx
        call dword ptr ds : [public_63991e8]
        add esp, 0xC
        jmp public_638bf2a
        public_638bf17 : nop
        mov edx, dword ptr ss : [esp+0x34]
/*FIXUP push offset public_63f7cb8 @0x638bf1b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f7cb8
        push edx
        call dword ptr ds : [public_63991e8]
        add esp, 8
        public_638bf2a : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [edi+eax+4]
        mov eax, dword ptr ss : [esp+0x3C]
        add edi, 4
        dec eax
        mov dword ptr ss : [esp+0x40], edi
        mov dword ptr ss : [esp+0x3C], eax
        jne public_638be3c
        public_638bf48 : nop
        lea ecx, ss:[esp+0x10]
        push ecx
        call public_636ecc0
        lea edx, ss:[esp+0x18]
        push edx
        call public_636ecc0
        lea eax, ss:[esp+0x20]
        push eax
        call public_636ecc0
        add esp, 0xC
        pop edi
        pop ebp
        pop ebx
        public_638bf6c : nop
        pop esi
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x638bcb0)
    }
}

#undef public_638bd72
#undef public_638bd8d
#undef public_638bd91
#undef public_638bdab
#undef public_638bdc3
#undef public_638bdca
#undef public_638bddb
#undef public_638bdee
#undef public_638be06
#undef public_638be0f
#undef public_638be3c
#undef public_638be7d
#undef public_638be9a
#undef public_638beae
#undef public_638beba
#undef public_638bebf
#undef public_638bed4
#undef public_638bee5
#undef public_638befc
#undef public_638bf01
#undef public_638bf17
#undef public_638bf2a
#undef public_638bf48
#undef public_638bf6c
