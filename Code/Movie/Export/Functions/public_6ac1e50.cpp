#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac16a0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac1be0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac1cf0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac1e50);
CLANG_FORWARD_PROC_SYMBOL(public_6acf3db);
CLANG_FORWARD_PROC_SYMBOL(public_6acfc45);

#define public_6ac1ebc _public_6ac1ebc
#define public_6ac1ebe _public_6ac1ebe
#define public_6ac1f00 _public_6ac1f00
#define public_6ac1f6d _public_6ac1f6d
#define public_6ac1fd9 _public_6ac1fd9
#define public_6ac2004 _public_6ac2004
#define public_6ac2024 _public_6ac2024
#define public_6ac2037 _public_6ac2037
#define public_6ac2041 _public_6ac2041
#define public_6ac20ff _public_6ac20ff
#define public_6ac2144 _public_6ac2144
#define public_6ac2153 _public_6ac2153
#define public_6ac215d _public_6ac215d
#define public_6ac2169 _public_6ac2169
#define public_6ac217c _public_6ac217c
#define public_6ac21be _public_6ac21be
#define public_6ac21d7 _public_6ac21d7
#define public_6ac2262 _public_6ac2262
#define public_6ac2272 _public_6ac2272
#define public_6ac227e _public_6ac227e
#define public_6ac22f0 _public_6ac22f0
#define public_6ac2302 _public_6ac2302
#define public_6ac2378 _public_6ac2378
#define public_6ac2386 _public_6ac2386

PROC_DECLARE(0x6ac1e50, internal_6ac1e50, public_6ac1e50);
extern "C" NAKED register_t __cdecl internal_6ac1e50()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 0x844
        mov byte ptr ds : [public_6ae0955], 0
        mov dword ptr ds : [public_6ae094c], eax
        push ebx
        push ebp
        push esi
        push edi
/*FIXUP push offset _public_6ac1cf0 @0x6ac1e6a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6ac1cf0
        push 0xFFFFFFFC
        push eax
        call dword ptr ds : [public_6ada174]
        mov ebx, dword ptr ds : [public_6ada1bc]
/*FIXUP push offset public_6ae0940 @0x6ac1e7e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ae0940
/*FIXUP push offset public_6adb1ac @0x6ac1e83*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6adb1ac
        xor ebp, ebp
        push 1
        push ebp
/*FIXUP push offset public_6adb22c @0x6ac1e8d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6adb22c
        mov dword ptr ds : [public_6ae0950], eax
        call ebx
        mov esi, eax
        cmp esi, ebp
        jl public_6ac2378
        push 8
        call public_6acf3db
        add esp, 4
        cmp eax, ebp
        je public_6ac1ebc
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [eax], offset public_6ada708
        jmp public_6ac1ebe
        public_6ac1ebc : nop
        xor eax, eax
        public_6ac1ebe : nop
        mov dword ptr ds : [public_6ae0948], eax
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [public_6ae0940]
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x10], ebp
        push ecx
        mov edx, dword ptr ds : [eax]
/*FIXUP push offset public_6ada970 @0x6ac1ed9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ada970
        push eax
        call dword ptr ds : [edx]
        test eax, eax
        jl public_6ac1f00
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [public_6ae0948]
        push ecx
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+0xC]
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+8]
        public_6ac1f00 : nop
        mov eax, dword ptr ss : [esp+0x860]
        push 0x400
        lea ecx, ss:[esp+0x58]
        push eax
        push ecx
        call public_6acfc45
        mov edi, dword ptr ds : [public_6ae0940]
        add esp, 0xC
        cmp edi, ebp
        je public_6ac2153
        lea edx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x20], 0
        push edx
/*FIXUP push offset public_6adb1cc @0x6ac1f35*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6adb1cc
        push 1
        push 0
/*FIXUP push offset public_6adb21c @0x6ac1f3e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6adb21c
        call ebx
        mov esi, eax
        test esi, esi
        jl public_6ac2378
        mov ecx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [edi]
/*FIXUP push offset public_6ada744 @0x6ac1f55*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ada744
        push ecx
        push edi
        call dword ptr ds : [eax+0xC]
        mov esi, eax
        test esi, esi
        jl public_6ac2144
        mov ebp, dword ptr ss : [esp+0x20]
        public_6ac1f6d : nop
        test esi, esi
        jl public_6ac2378
        mov eax, dword ptr ss : [ebp]
        lea ecx, ss:[esp+0x1C]
        push ecx
/*FIXUP push offset public_6adb1bc @0x6ac1f7d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6adb1bc
        push ebp
        call dword ptr ds : [eax]
        mov esi, eax
        test esi, esi
        jl public_6ac2041
        mov eax, dword ptr ss : [esp+0x1C]
        lea ecx, ss:[esp+0x54]
        push 0
        push ecx
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0xC]
        mov esi, eax
        test esi, esi
        jl public_6ac2037
        mov edx, dword ptr ss : [ebp]
        lea eax, ss:[esp+0x18]
        push eax
        push ebp
        call dword ptr ds : [edx+0x28]
        mov esi, eax
        test esi, esi
        jl public_6ac2037
        mov eax, dword ptr ss : [esp+0x18]
        lea edx, ss:[esp+0x10]
        push 0
        mov edi, 1
        mov ecx, dword ptr ds : [eax]
        push edx
        push edi
        push eax
        xor bl, bl
        call dword ptr ds : [ecx+0xC]
        test eax, eax
        jne public_6ac2024
        public_6ac1fd9 : nop
        mov eax, dword ptr ss : [esp+0x10]
        lea edx, ss:[esp+0x24]
        push edx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x24]
        cmp dword ptr ss : [esp+0x24], edi
        jne public_6ac2004
        mov eax, dword ptr ds : [public_6ae0940]
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x30]
        test eax, eax
        je public_6ac2004
        mov bl, 1
        public_6ac2004 : nop
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+8]
        mov eax, dword ptr ss : [esp+0x18]
        lea ecx, ss:[esp+0x10]
        push 0
        push ecx
        mov edx, dword ptr ds : [eax]
        push edi
        push eax
        call dword ptr ds : [edx+0xC]
        test eax, eax
        je public_6ac1fd9
        public_6ac2024 : nop
        mov eax, dword ptr ss : [esp+0x18]
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+8]
        test bl, bl
        je public_6ac2037
        mov esi, 0x80004004
        public_6ac2037 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+8]
        public_6ac2041 : nop
        mov edx, dword ptr ss : [ebp]
        push ebp
        call dword ptr ds : [edx+8]
        test esi, esi
        jl public_6ac2378
        mov eax, dword ptr ds : [public_6ae0940]
/*FIXUP push offset public_6ae0938 @0x6ac2055*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ae0938
/*FIXUP push offset public_6adb20c @0x6ac205a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6adb20c
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx]
        mov eax, dword ptr ds : [public_6ae0940]
/*FIXUP push offset public_6ae093c @0x6ac2069*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ae093c
/*FIXUP push offset public_6adb1ec @0x6ac206e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6adb1ec
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx]
        mov eax, dword ptr ds : [public_6ae0940]
/*FIXUP push offset public_6ae0944 @0x6ac207d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ae0944
/*FIXUP push offset public_6adb1dc @0x6ac2082*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6adb1dc
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx]
        mov eax, dword ptr ds : [public_6ae093c]
        mov byte ptr ds : [public_6ae0954], 1
        push 0
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+0x34]
        mov eax, dword ptr ds : [public_6ae093c]
        push 0
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x4C]
        mov eax, dword ptr ds : [public_6ae093c]
        mov ecx, dword ptr ds : [public_6ae094c]
        push ecx
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+0x74]
        mov eax, dword ptr ds : [public_6ae0938]
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+0x20]
        mov esi, eax
        push 0x21D
/*FIXUP push offset public_6ada718 @0x6ac20d1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ada718
        push esi
        call public_6ac16a0
        add esp, 0xC
        cmp esi, 1
        jne public_6ac21d7
        mov edi, dword ptr ds : [public_6ada190]
        mov ebp, dword ptr ds : [public_6ada194]
        mov ebx, dword ptr ds : [public_6ada198]
        mov byte ptr ss : [esp+0x17], 0
        public_6ac20ff : nop
        mov eax, dword ptr ds : [public_6ae0938]
        lea edx, ss:[esp+0x24]
        push edx
        push 0xA
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x28]
        mov esi, eax
        push 0x227
/*FIXUP push offset public_6ada718 @0x6ac2118*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ada718
        push esi
        call public_6ac16a0
        add esp, 0xC
        cmp esi, 0x80004005
        je public_6ac2262
        test esi, esi
        je public_6ac215d
        cmp esi, 0x40268
        je public_6ac2262
        jmp public_6ac2169
        public_6ac2144 : nop
        mov eax, dword ptr ss : [esp+0x20]
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+8]
        jmp public_6ac1f6d
        public_6ac2153 : nop
        mov esi, 0x80004003
        jmp public_6ac2378
        public_6ac215d : nop
        cmp dword ptr ss : [esp+0x24], 1
        jne public_6ac2169
        mov byte ptr ss : [esp+0x17], 1
        public_6ac2169 : nop
        push 0
        push 0
        push 0
        lea eax, ss:[esp+0x44]
        push 0
        push eax
        call edi
        test eax, eax
        je public_6ac21be
        public_6ac217c : nop
        push 0
        push 0
        lea ecx, ss:[esp+0x40]
        push 0
        push ecx
        call dword ptr ds : [public_6ada19c]
        test eax, eax
        je public_6ac2262
        lea edx, ss:[esp+0x38]
        push edx
        call ebp
        lea eax, ss:[esp+0x38]
        push eax
        call ebx
        push 0
        call dword ptr ds : [public_6ada040]
        push 0
        push 0
        push 0
        lea ecx, ss:[esp+0x44]
        push 0
        push ecx
        call edi
        test eax, eax
        jne public_6ac217c
        public_6ac21be : nop
        mov eax, dword ptr ds : [public_6ae0940]
        test eax, eax
        je public_6ac2262
        mov al, byte ptr ss : [esp+0x17]
        test al, al
        je public_6ac20ff
        public_6ac21d7 : nop
        mov edx, dword ptr ds : [public_6ae094c]
        mov esi, dword ptr ds : [public_6ada1a0]
        push edx
        call esi
        mov eax, dword ptr ds : [public_6ae093c]
        push 0xFFFFFFFF
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x4C]
        mov eax, dword ptr ds : [public_6ae093c]
        lea ecx, ss:[esp+0x1C]
        push ecx
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+0x28]
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [public_6ae093c]
        and eax, 0xFF3BFFFF
        or eax, 0x46000000
        mov dword ptr ss : [esp+0x1C], eax
        mov edx, dword ptr ds : [ecx]
        push eax
        push ecx
        call dword ptr ds : [edx+0x24]
        push 0
        call esi
        mov eax, dword ptr ds : [public_6ae093c]
        push 0xFFFFFFFF
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x94]
        push 0x263
/*FIXUP push offset public_6ada718 @0x6ac223b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ada718
        push eax
        call public_6ac16a0
        mov al, byte ptr ss : [esp+0x868]
        add esp, 0xC
        test al, al
        je public_6ac2272
        lea edx, ss:[esp+0x28]
        push edx
        call dword ptr ds : [public_6ada1ac]
        push eax
        jmp public_6ac227e
        public_6ac2262 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 0x80004005
        pop ebx
        add esp, 0x844
        ret 
        public_6ac2272 : nop
        mov ecx, dword ptr ds : [public_6ae094c]
        lea eax, ss:[esp+0x28]
        push eax
        push ecx
        public_6ac227e : nop
        call dword ptr ds : [public_6ada17c]
        mov eax, dword ptr ds : [public_6ae093c]
        lea ecx, ss:[esp+0x10]
        push ecx
        lea ecx, ss:[esp+0x1C]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0xA8]
        push 0x2AD
/*FIXUP push offset public_6ada718 @0x6ac22a1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ada718
        push eax
        call public_6ac16a0
        mov ecx, dword ptr ss : [esp+0x40]
        mov eax, dword ptr ds : [public_6ae093c]
        add esp, 0xC
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, dword ptr ss : [esp+0x34]
        push ecx
        push 0
        push 0
        push eax
        call dword ptr ds : [edx+0x9C]
        push 0x2B1
/*FIXUP push offset public_6ada718 @0x6ac22d0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ada718
        push eax
        call public_6ac16a0
        mov edi, dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ss : [esp+0x24]
        add esp, 0xC
        cmp edi, ecx
        jge public_6ac22f0
        mov ecx, edi
        mov dword ptr ss : [esp+0x18], ecx
        public_6ac22f0 : nop
        mov eax, dword ptr ss : [esp+0x34]
        mov edx, dword ptr ss : [esp+0x10]
        cmp eax, edx
        jge public_6ac2302
        mov edx, eax
        mov dword ptr ss : [esp+0x10], edx
        public_6ac2302 : nop
        sub eax, edx
        push edx
        cdq 
        sub eax, edx
        push ecx
        sar eax, 1
        push eax
        mov esi, dword ptr ds : [public_6ae0944]
        mov eax, edi
        sub eax, ecx
        mov ebx, dword ptr ds : [esi]
        cdq 
        sub eax, edx
        sar eax, 1
        push eax
        push esi
        call dword ptr ds : [ebx+0x7C]
        push 0x2C6
/*FIXUP push offset public_6ada718 @0x6ac2327*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ada718
        push eax
        call public_6ac16a0
        mov eax, dword ptr ds : [public_6ae0940]
        add esp, 0xC
        mov edx, dword ptr ds : [eax]
/*FIXUP push offset public_6ae0934 @0x6ac233c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ae0934
/*FIXUP push offset public_6adb1fc @0x6ac2341*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6adb1fc
        push eax
        call dword ptr ds : [edx]
        mov eax, dword ptr ds : [public_6ae0934]
        mov edx, dword ptr ds : [public_6ae094c]
        push 0
        push 0x8001
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x34]
        mov eax, dword ptr ds : [public_6ae0938]
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x1C]
        mov esi, eax
        test esi, esi
        setge byte ptr ds : [public_6ae0955]
        public_6ac2378 : nop
        mov al, byte ptr ds : [public_6ae0955]
        test al, al
        jne public_6ac2386
        call public_6ac1be0
        public_6ac2386 : nop
        mov eax, esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x844
        ret 
        UNREACHABLE_TRAP(0x6ac1e50)
    }
}

#undef public_6ac1ebc
#undef public_6ac1ebe
#undef public_6ac1f00
#undef public_6ac1f6d
#undef public_6ac1fd9
#undef public_6ac2004
#undef public_6ac2024
#undef public_6ac2037
#undef public_6ac2041
#undef public_6ac20ff
#undef public_6ac2144
#undef public_6ac2153
#undef public_6ac215d
#undef public_6ac2169
#undef public_6ac217c
#undef public_6ac21be
#undef public_6ac21d7
#undef public_6ac2262
#undef public_6ac2272
#undef public_6ac227e
#undef public_6ac22f0
#undef public_6ac2302
#undef public_6ac2378
#undef public_6ac2386
