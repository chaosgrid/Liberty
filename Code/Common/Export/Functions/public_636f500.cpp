#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_636ec10);
CLANG_FORWARD_PROC_SYMBOL(public_636ee40);
CLANG_FORWARD_PROC_SYMBOL(public_636f3a0);
CLANG_FORWARD_PROC_SYMBOL(public_636f500);
CLANG_FORWARD_PROC_SYMBOL(public_6372240);
CLANG_FORWARD_PROC_SYMBOL(public_6378600);

#define public_636f53c _public_636f53c
#define public_636f545 _public_636f545
#define public_636f560 _public_636f560
#define public_636f583 _public_636f583
#define public_636f5aa _public_636f5aa
#define public_636f5c7 _public_636f5c7
#define public_636f5de _public_636f5de
#define public_636f5f6 _public_636f5f6

PROC_DECLARE(0x636f500, internal_636f500, public_636f500);
extern "C" NAKED register_t __cdecl internal_636f500()
{
    __asm
    {
        mov eax, dword ptr ds : [public_658b900]
        push ebp
        push esi
        push edi
        push eax
        xor edi, edi
        call public_636ec10
        mov ebp, eax
        mov eax, dword ptr ds : [public_658b078]
        add esp, 4
        cmp eax, 1
        jl public_636f53c
        mov ecx, dword ptr ds : [public_658b824]
        mov edx, dword ptr ds : [public_658b7fc]
        push ebp
        push ecx
/*FIXUP push offset public_63eeecc @0x636f52d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63eeecc
        push edx
        call dword ptr ds : [public_63991e8]
        add esp, 0x10
        public_636f53c : nop
        mov eax, dword ptr ds : [public_658b820]
        test eax, eax
        je public_636f560
        public_636f545 : nop
        mov ecx, dword ptr ds : [eax+0x50]
        test ch, 4
        je public_636f560
        mov esi, dword ptr ds : [eax+0x30]
        push eax
        inc edi
        call public_636f3a0
        add esp, 4
        test esi, esi
        mov eax, esi
        jne public_636f545
        public_636f560 : nop
        mov eax, dword ptr ds : [public_658b824]
        cmp edi, eax
        je public_636f583
        push edi
        push eax
/*FIXUP push offset public_63eee6c @0x636f56b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63eee6c
        call public_6356960
        push 0
        push 0
        push 5
        call public_6378600
        add esp, 0x18
        public_636f583 : nop
        mov ecx, dword ptr ds : [public_658bfb8]
        mov eax, dword ptr ds : [public_658bfc0]
        add ecx, edi
        cmp eax, edi
        mov dword ptr ds : [public_658b824], 0
        mov dword ptr ds : [public_658bfb8], ecx
        jge public_636f5aa
        mov dword ptr ds : [public_658bfc0], edi
        public_636f5aa : nop
        mov ecx, dword ptr ds : [public_658bb40]
        mov eax, dword ptr ds : [public_658bb48]
        add ecx, ebp
        cmp eax, ebp
        mov dword ptr ds : [public_658bb40], ecx
        jge public_636f5c7
        mov dword ptr ds : [public_658bb48], ebp
        public_636f5c7 : nop
        mov ecx, dword ptr ds : [public_658b900]
        test ecx, ecx
        je public_636f5f6
        mov eax, dword ptr ds : [ecx+4]
        lea esi, ds:[ecx+4]
        add esi, 4
        test eax, eax
        je public_636f5f6
        public_636f5de : nop
        push eax
        call public_6372240
        mov eax, dword ptr ds : [esi]
        add esp, 4
        add esi, 4
        test eax, eax
        jne public_636f5de
        mov ecx, dword ptr ds : [public_658b900]
        public_636f5f6 : nop
        push 0
        push ecx
        call public_636ee40
        add esp, 8
        pop edi
        pop esi
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x636f500)
    }
}

#undef public_636f53c
#undef public_636f545
#undef public_636f560
#undef public_636f583
#undef public_636f5aa
#undef public_636f5c7
#undef public_636f5de
#undef public_636f5f6
