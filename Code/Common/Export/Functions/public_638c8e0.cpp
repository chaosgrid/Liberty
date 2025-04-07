#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_636ec70);
CLANG_FORWARD_PROC_SYMBOL(public_636ecc0);
CLANG_FORWARD_PROC_SYMBOL(public_637d030);
CLANG_FORWARD_PROC_SYMBOL(public_637dff0);
CLANG_FORWARD_PROC_SYMBOL(public_637f470);
CLANG_FORWARD_PROC_SYMBOL(public_638c8e0);
CLANG_FORWARD_PROC_SYMBOL(public_638cae0);
CLANG_FORWARD_PROC_SYMBOL(public_638dba0);
CLANG_FORWARD_PROC_SYMBOL(public_638e2b0);
CLANG_FORWARD_PROC_SYMBOL(public_6390b50);

#define public_638c8fb _public_638c8fb
#define public_638c92f _public_638c92f
#define public_638c955 _public_638c955
#define public_638c979 _public_638c979
#define public_638c9fe _public_638c9fe
#define public_638ca1b _public_638ca1b
#define public_638ca28 _public_638ca28
#define public_638ca36 _public_638ca36
#define public_638ca48 _public_638ca48
#define public_638ca5f _public_638ca5f
#define public_638ca6d _public_638ca6d
#define public_638ca84 _public_638ca84
#define public_638caa9 _public_638caa9

PROC_DECLARE(0x638c8e0, internal_638c8e0, public_638c8e0);
extern "C" NAKED register_t __cdecl internal_638c8e0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ds : [public_658b1cc]
        test eax, eax
        mov dword ptr ss : [esp], 0
        jne public_638c8fb
        mov eax, dword ptr ds : [public_658b078]
        test eax, eax
        je public_638c955
        public_638c8fb : nop
        push 0
        push 0
        call public_637dff0
        mov eax, dword ptr ds : [public_658b7fc]
        push eax
        call public_637f470
        mov eax, dword ptr ds : [public_658b190]
        add esp, 0xC
        test eax, eax
        je public_638c92f
        mov ecx, dword ptr ds : [public_658b7fc]
/*FIXUP push offset public_63f9ffc @0x638c921*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f9ffc
        push ecx
        call public_637d030
        add esp, 8
        public_638c92f : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x10]
        push edx
        mov edx, dword ptr ss : [esp+0x10]
        push eax
        mov eax, dword ptr ss : [esp+0x10]
        push ecx
        push edx
        push eax
/*FIXUP push offset public_63f9fdc @0x638c948*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f9fdc
        call public_6356960
        add esp, 0x18
        public_638c955 : nop
        cmp dword ptr ds : [public_658b078], 2
        push edi
        mov edi, dword ptr ss : [esp+0x20]
        jl public_638c979
        mov ecx, dword ptr ds : [public_658b7fc]
        push edi
/*FIXUP push offset public_63f9fac @0x638c96a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f9fac
        push ecx
        call dword ptr ds : [public_63991e8]
        add esp, 0xC
        public_638c979 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [public_658b694], eax
        mov eax, dword ptr ds : [public_658b80c]
        mov dword ptr ds : [public_658b690], edx
        mov edx, dword ptr ss : [esp+0x1C]
        push eax
        mov dword ptr ds : [public_658b698], ecx
        mov dword ptr ds : [public_658b69c], edx
        mov dword ptr ds : [public_658b8c0], 1
        call public_636ec70
        mov ecx, dword ptr ds : [public_658b80c]
        push ecx
        mov dword ptr ds : [public_658b8f4], eax
        call public_636ec70
        mov ecx, dword ptr ds : [public_658b820]
        mov dword ptr ds : [public_658b8f0], eax
        mov eax, dword ptr ds : [public_658b810]
        add esp, 8
        cmp ecx, eax
        je public_638caa9
        test eax, eax
        mov dword ptr ds : [public_658b8a0], 1
        mov dword ptr ds : [public_658b81c], eax
        mov dword ptr ds : [public_658b820], eax
        je public_638ca28
        mov edx, 0x200
        public_638c9fe : nop
        mov ecx, dword ptr ds : [eax+0x30]
        test ecx, ecx
        je public_638ca28
        mov ecx, dword ptr ds : [eax+0x50]
        or ecx, edx
        test ch, 0x10
        mov dword ptr ds : [eax+0x50], ecx
        jne public_638ca1b
        or ecx, 0x10000000
        mov dword ptr ds : [eax+0x50], ecx
        public_638ca1b : nop
        inc dword ptr ds : [public_658be80]
        mov eax, dword ptr ds : [eax+0x30]
        test eax, eax
        jne public_638c9fe
        public_638ca28 : nop
        mov eax, dword ptr ds : [public_658b838]
        test eax, eax
        mov dword ptr ds : [public_658b840], eax
        je public_638ca48
        public_638ca36 : nop
        cmp dword ptr ds : [eax], 0
        je public_638ca48
        or dword ptr ds : [eax+0x14], 0x10000000
        mov eax, dword ptr ds : [eax]
        test eax, eax
        jne public_638ca36
        public_638ca48 : nop
        mov eax, dword ptr ds : [public_658b670]
        test eax, eax
        je public_638ca84
        mov eax, dword ptr ds : [public_658b838]
        test eax, eax
        je public_638ca6d
        mov ecx, 0x4000000
        public_638ca5f : nop
        cmp dword ptr ds : [eax], 0
        je public_638ca6d
        or dword ptr ds : [eax+0x14], ecx
        mov eax, dword ptr ds : [eax]
        test eax, eax
        jne public_638ca5f
        public_638ca6d : nop
        mov eax, dword ptr ds : [public_658b0a0]
        test eax, eax
        je public_638ca84
        cmp dword ptr ds : [public_658b24c], 5
        jg public_638ca84
        call public_6390b50
        public_638ca84 : nop
        mov eax, dword ptr ds : [public_658b0e8]
        test eax, eax
        jne public_638caa9
        mov eax, dword ptr ds : [public_658b0a0]
        test eax, eax
        jne public_638caa9
        mov eax, dword ptr ds : [public_658b81c]
        lea edx, ss:[esp+4]
        push edx
        push eax
        call public_638dba0
        add esp, 8
        public_638caa9 : nop
        mov ecx, dword ptr ds : [public_658b81c]
        push ecx
        call public_638e2b0
        push edi
        push 0
        call public_638cae0
/*FIXUP push offset public_658b8f0 @0x638cabd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_658b8f0
        call public_636ecc0
/*FIXUP push offset public_658b8f4 @0x638cac7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_658b8f4
        call public_636ecc0
        add esp, 0x14
        pop edi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x638c8e0)
    }
}

#undef public_638c8fb
#undef public_638c92f
#undef public_638c955
#undef public_638c979
#undef public_638c9fe
#undef public_638ca1b
#undef public_638ca28
#undef public_638ca36
#undef public_638ca48
#undef public_638ca5f
#undef public_638ca6d
#undef public_638ca84
#undef public_638caa9
