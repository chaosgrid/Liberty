#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41b150);
CLANG_FORWARD_PROC_SYMBOL(public_41b640);
CLANG_FORWARD_PROC_SYMBOL(public_41ba80);
CLANG_FORWARD_PROC_SYMBOL(public_41bd70);
CLANG_FORWARD_PROC_SYMBOL(public_4323f0);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);

#define public_41b178 _public_41b178
#define public_41b191 _public_41b191
#define public_41b1a9 _public_41b1a9
#define public_41b1c1 _public_41b1c1
#define public_41b1d9 _public_41b1d9
#define public_41b1ec _public_41b1ec
#define public_41b1f4 _public_41b1f4
#define public_41b1fe _public_41b1fe
#define public_41b203 _public_41b203
#define public_41b205 _public_41b205
#define public_41b213 _public_41b213
#define public_41b297 _public_41b297
#define public_41b2a0 _public_41b2a0
#define public_41b2c7 _public_41b2c7

PROC_DECLARE(0x41b150, internal_41b150, public_41b150);
extern "C" NAKED register_t __cdecl internal_41b150()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        push ebp
        push esi
/*FIXUP push offset public_6166ec @0x41b156*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6166ec
        xor ebx, ebx
        xor ebp, ebp
        call dword ptr ds : [public_5c6f70]
        mov eax, dword ptr ds : [public_6166dc]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_41b213
        push edi
        or edi, 0xFFFFFFFF
        public_41b178 : nop
        mov ecx, dword ptr ds : [esi+0x10]
        inc ebp
        cmp ecx, edi
        je public_41b191
        mov eax, dword ptr ds : [public_5c6d4c]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ds : [esi+0x10], edi
        public_41b191 : nop
        mov ecx, dword ptr ds : [esi+0x14]
        cmp ecx, edi
        je public_41b1a9
        mov eax, dword ptr ds : [public_5c6d38]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x28]
        mov dword ptr ds : [esi+0x14], edi
        public_41b1a9 : nop
        mov eax, dword ptr ds : [esi+0x1C]
        cmp eax, ebx
        je public_41b1c1
        mov ecx, dword ptr ds : [public_5c6d7c]
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x10]
        mov dword ptr ds : [esi+0x1C], ebx
        public_41b1c1 : nop
        mov eax, dword ptr ds : [esi+0x18]
        cmp eax, ebx
        je public_41b1d9
        mov ecx, dword ptr ds : [public_5c6d84]
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x10]
        mov dword ptr ds : [esi+0x18], ebx
        public_41b1d9 : nop
        mov eax, dword ptr ds : [esi+8]
        cmp byte ptr ds : [eax+0x25], bl
        jne public_41b1ec
        push eax
        call public_41bd70
        add esp, 4
        jmp public_41b203
        public_41b1ec : nop
        mov eax, dword ptr ds : [esi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_41b1fe
        public_41b1f4 : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax+4]
        cmp esi, dword ptr ds : [eax+8]
        je public_41b1f4
        public_41b1fe : nop
        cmp dword ptr ds : [esi+8], eax
        je public_41b205
        public_41b203 : nop
        mov esi, eax
        public_41b205 : nop
        mov eax, dword ptr ds : [public_6166dc]
        cmp esi, eax
        jne public_41b178
        pop edi
        public_41b213 : nop
        mov ecx, dword ptr ds : [eax]
        mov esi, eax
        cmp dword ptr ds : [public_6166e8], ebx
        mov dword ptr ss : [esp+0xC], ecx
        je public_41b297
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, offset public_6166d8
        call public_53e430
        mov ecx, dword ptr ss : [esp+0xC]
        cmp ecx, dword ptr ds : [eax]
        jne public_41b297
        mov eax, dword ptr ds : [public_6166dc]
        cmp esi, eax
        jne public_41b297
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, offset public_6166d8
        call public_41ba80
        mov eax, dword ptr ds : [public_6166e0]
        mov edx, dword ptr ds : [public_6166dc]
        mov dword ptr ds : [edx+4], eax
        mov eax, dword ptr ds : [public_6166dc]
        mov dword ptr ds : [public_6166e8], ebx
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [public_6166dc]
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, offset public_6166d8
        mov dword ptr ds : [eax+8], eax
        call public_53e430
/*FIXUP push offset public_6166ec @0x41b283*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6166ec
        call dword ptr ds : [public_5c6ee8]
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 0x10
        ret 
        public_41b297 : nop
        cmp ecx, esi
        je public_41b2c7
        nop 
        lea esp, ss:[esp]
        public_41b2a0 : nop
        push ebx
        lea edx, ss:[esp+0x14]
        push edx
        lea ecx, ss:[esp+0x14]
        call public_4323f0
        mov eax, dword ptr ds : [eax]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, offset public_6166d8
        call public_41b640
        cmp dword ptr ss : [esp+0xC], esi
        jne public_41b2a0
/*FIXUP public_41b2c7 : nop
        push offset public_6166ec @0x41b2c7*/
  FIXUP public_41b2c7 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6166ec
        call dword ptr ds : [public_5c6ee8]
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x41b150)
    }
}

#undef public_41b178
#undef public_41b191
#undef public_41b1a9
#undef public_41b1c1
#undef public_41b1d9
#undef public_41b1ec
#undef public_41b1f4
#undef public_41b1fe
#undef public_41b203
#undef public_41b205
#undef public_41b213
#undef public_41b297
#undef public_41b2a0
#undef public_41b2c7
