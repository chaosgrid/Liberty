#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_636e1b0);
CLANG_FORWARD_PROC_SYMBOL(public_636e400);
CLANG_FORWARD_PROC_SYMBOL(public_636e5a0);
CLANG_FORWARD_PROC_SYMBOL(public_636ec10);
CLANG_FORWARD_PROC_SYMBOL(public_638e830);
CLANG_FORWARD_PROC_SYMBOL(public_6390d70);
CLANG_FORWARD_PROC_SYMBOL(public_63910e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391200);

#define public_6391237 _public_6391237
#define public_639123c _public_639123c
#define public_6391250 _public_6391250
#define public_6391264 _public_6391264
#define public_63912a1 _public_63912a1
#define public_63912b5 _public_63912b5
#define public_63912d5 _public_63912d5
#define public_63912de _public_63912de
#define public_6391307 _public_6391307
#define public_639134d _public_639134d
#define public_6391360 _public_6391360
#define public_6391376 _public_6391376
#define public_6391395 _public_6391395
#define public_63913b3 _public_63913b3
#define public_63913dc _public_63913dc
#define public_63913f9 _public_63913f9

PROC_DECLARE(0x6391200, internal_6391200, public_6391200);
extern "C" NAKED register_t __cdecl internal_6391200()
{
    __asm
    {
        mov eax, dword ptr ds : [public_658b078]
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        xor ebp, ebp
        cmp eax, 2
        push edi
        jge public_6391237
        mov ecx, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ds : [public_658b830]
        and ecx, 0xFFFFFF
        cmp ecx, eax
        je public_6391237
        mov edx, dword ptr ds : [ebx+0x14]
        and edx, 0xFFFFFF
        cmp edx, eax
        jne public_639123c
        public_6391237 : nop
        mov ebp, 1
        public_639123c : nop
        mov eax, dword ptr ss : [esp+0x1C]
        test eax, eax
        je public_6391264
        lea edi, ds:[eax+4]
        mov eax, dword ptr ds : [edi]
        add edi, 4
        test eax, eax
        je public_6391264
        public_6391250 : nop
        push ebx
        push esi
        push eax
        call public_63910e0
        mov eax, dword ptr ds : [edi]
        add esp, 0xC
        add edi, 4
        test eax, eax
        jne public_6391250
        public_6391264 : nop
        mov edi, dword ptr ss : [esp+0x20]
        test edi, edi
        jne public_6391307
        mov ecx, dword ptr ds : [public_658bea8]
        inc ecx
        test ebp, ebp
        mov dword ptr ds : [public_658bea8], ecx
        je public_63912a1
        mov eax, dword ptr ds : [ebx+0x14]
        mov ecx, dword ptr ds : [esi+0x14]
        and eax, 0xFFFFFF
        push eax
        and ecx, 0xFFFFFF
        push ecx
/*FIXUP push offset public_63fb82c @0x6391294*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fb82c
        call public_6356960
        add esp, 0xC
        public_63912a1 : nop
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_63912de
        mov edi, dword ptr ds : [eax+4]
        lea ebx, ds:[eax+4]
        add ebx, 4
        test edi, edi
        je public_63912de
        public_63912b5 : nop
        push edi
        call public_638e830
        mov edx, dword ptr ds : [edi+0x34]
        push esi
        push edx
        call public_636e5a0
        push edi
        call public_6390d70
        add esp, 0x10
        test eax, eax
        je public_63912d5
        sub ebx, 4
        public_63912d5 : nop
        mov edi, dword ptr ds : [ebx]
        add ebx, 4
        test edi, edi
        jne public_63912b5
        public_63912de : nop
        mov eax, dword ptr ds : [esi+0x14]
        test eax, 0x8000000
        jne public_63913f9
        or eax, 0x8000000
        push esi
/*FIXUP push offset public_658b900 @0x63912f2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_658b900
        mov dword ptr ds : [esi+0x14], eax
        call public_636e1b0
        add esp, 8
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        public_6391307 : nop
        mov eax, dword ptr ds : [esi+0xC]
        push eax
        call public_636ec10
        add esp, 4
        cmp eax, 2
        jne public_6391395
        mov ecx, dword ptr ds : [public_658beb8]
        inc ecx
        test ebp, ebp
        mov dword ptr ds : [public_658beb8], ecx
        je public_639134d
        mov ecx, dword ptr ds : [edi+0x4C]
        mov edx, dword ptr ds : [ebx+0x14]
        mov eax, dword ptr ds : [esi+0x14]
        push ecx
        and edx, 0xFFFFFF
        push edx
        and eax, 0xFFFFFF
        push eax
/*FIXUP push offset public_63fb7f4 @0x6391340*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fb7f4
        call public_6356960
        add esp, 0x10
        public_639134d : nop
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_6391376
        lea edi, ds:[eax+4]
        mov eax, dword ptr ds : [edi]
        add edi, 4
        test eax, eax
        je public_6391376
        public_6391360 : nop
        mov ecx, dword ptr ds : [eax+0x34]
        push esi
        push ecx
        call public_636e5a0
        mov eax, dword ptr ds : [edi]
        add esp, 8
        add edi, 4
        test eax, eax
        jne public_6391360
        public_6391376 : nop
        mov edi, dword ptr ds : [esi+0x14]
        push esi
        or edi, 0x8000000
/*FIXUP push offset public_658b900 @0x6391380*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_658b900
        mov dword ptr ds : [esi+0x14], edi
        call public_636e1b0
        add esp, 8
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        public_6391395 : nop
        mov ecx, dword ptr ds : [public_658beb0]
        inc ecx
        test ebp, ebp
        mov ebp, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [public_658beb0], ecx
        jne public_63913b3
        mov eax, dword ptr ds : [public_658b078]
        test eax, eax
        je public_63913dc
        public_63913b3 : nop
        mov edx, dword ptr ss : [ebp+0x4C]
        mov eax, dword ptr ds : [edi+0x4C]
        mov ecx, dword ptr ds : [ebx+0x14]
        push edx
        mov edx, dword ptr ds : [esi+0x14]
        push eax
        and ecx, 0xFFFFFF
        push ecx
        and edx, 0xFFFFFF
        push edx
/*FIXUP push offset public_63fb7b0 @0x63913cf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fb7b0
        call public_6356960
        add esp, 0x14
        public_63913dc : nop
        mov eax, dword ptr ds : [edi+0x34]
        push esi
        push eax
        call public_636e5a0
        mov ecx, dword ptr ds : [esi+0xC]
        push edi
        push ecx
        call public_636e400
        push ebp
        call public_6390d70
        add esp, 0x14
        public_63913f9 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6391200)
    }
}

#undef public_6391237
#undef public_639123c
#undef public_6391250
#undef public_6391264
#undef public_63912a1
#undef public_63912b5
#undef public_63912d5
#undef public_63912de
#undef public_6391307
#undef public_639134d
#undef public_6391360
#undef public_6391376
#undef public_6391395
#undef public_63913b3
#undef public_63913dc
#undef public_63913f9
