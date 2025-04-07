#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3b330);
CLANG_FORWARD_PROC_SYMBOL(public_6b4ecd0);

#define public_6b3b380 _public_6b3b380
#define public_6b3b3a2 _public_6b3b3a2
#define public_6b3b3b2 _public_6b3b3b2
#define public_6b3b416 _public_6b3b416
#define public_6b3b430 _public_6b3b430
#define public_6b3b43d _public_6b3b43d
#define public_6b3b445 _public_6b3b445
#define public_6b3b44f _public_6b3b44f
#define public_6b3b456 _public_6b3b456
#define public_6b3b463 _public_6b3b463
#define public_6b3b46d _public_6b3b46d

PROC_DECLARE(0x6b3b330, internal_6b3b330, public_6b3b330);
extern "C" NAKED register_t __cdecl internal_6b3b330()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0xC
        mov eax, dword ptr ss : [ebp+8]
        push ebx
        push esi
        push edi
        mov esi, ecx
/*FIXUP push offset public_6b6c030 @0x6b3b341*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6b6c030
        push eax
        mov dword ptr ss : [esp+0x1C], esi
        call dword ptr ds : [public_6b6b1c8]
        mov ebx, eax
        add esp, 8
        test ebx, ebx
        je public_6b3b46d
/*FIXUP push offset public_6b6bfa0 @0x6b3b35e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6b6bfa0
        push ebx
        call dword ptr ds : [public_6b6b1cc]
        mov eax, dword ptr ds : [esi+0xC]
        mov edi, dword ptr ds : [eax]
        add esp, 8
        cmp edi, eax
        je public_6b3b463
        lea ebx, ds:[ebx]
        public_6b3b380 : nop
        mov eax, dword ptr ds : [edi+0xC]
        mov ecx, dword ptr ds : [edi+0x10]
        push eax
        mov dword ptr ss : [esp+0x14], ecx
        call public_6b4ecd0
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        add esp, 4
        test eax, eax
        jne public_6b3b3a2
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_6b3b416
        public_6b3b3a2 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edx+8]
        test eax, eax
        jne public_6b3b3b2
        mov eax, dword ptr ds : [public_6b6b14c]
        public_6b3b3b2 : nop
        push eax
/*FIXUP push offset public_6b6bf98 @0x6b3b3b3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6b6bf98
        push ebx
        call dword ptr ds : [public_6b6b1cc]
        mov eax, dword ptr ds : [esi+0x2C]
        mov ecx, dword ptr ds : [esi+0x28]
        mov edx, dword ptr ds : [esi+0x24]
        push eax
        mov eax, dword ptr ds : [esi+0x20]
        push ecx
        mov ecx, dword ptr ds : [esi+0x1C]
        push edx
        mov edx, dword ptr ds : [esi+0xC]
        push eax
        mov eax, dword ptr ds : [esi+0x14]
        push ecx
        mov ecx, dword ptr ds : [esi+4]
        push edx
        push eax
        push ecx
/*FIXUP push offset public_6b6bf84 @0x6b3b3df*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6b6bf84
        push ebx
        call dword ptr ds : [public_6b6b1cc]
        mov edx, dword ptr ds : [esi+0x18]
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+0x10]
        push edx
        mov edx, dword ptr ds : [esi]
        mov esi, dword ptr ds : [public_6b6b1cc]
        push eax
        push ecx
        push edx
/*FIXUP push offset public_6b6bf78 @0x6b3b400*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6b6bf78
        push ebx
        call esi
        add esp, 0x4C
/*FIXUP push offset public_6b6bf74 @0x6b3b40b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6b6bf74
        push ebx
        call esi
        add esp, 8
        public_6b3b416 : nop
        mov eax, dword ptr ds : [edi+8]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        jne public_6b3b43d
        mov edi, eax
        mov eax, dword ptr ds : [edi]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        jne public_6b3b456
        nop 
        lea esp, ss:[esp]
        public_6b3b430 : nop
        mov edi, eax
        mov eax, dword ptr ds : [edi]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        je public_6b3b430
        jmp public_6b3b456
        public_6b3b43d : nop
        mov eax, dword ptr ds : [edi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6b3b44f
        public_6b3b445 : nop
        mov edi, eax
        mov eax, dword ptr ds : [eax+4]
        cmp edi, dword ptr ds : [eax+8]
        je public_6b3b445
        public_6b3b44f : nop
        cmp dword ptr ds : [edi+8], eax
        je public_6b3b456
        mov edi, eax
        public_6b3b456 : nop
        mov eax, dword ptr ss : [esp+0x14]
        cmp edi, dword ptr ds : [eax+0xC]
        jne public_6b3b380
        public_6b3b463 : nop
        push ebx
        call dword ptr ds : [public_6b6b1d0]
        add esp, 4
        public_6b3b46d : nop
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6b3b330)
    }
}

#undef public_6b3b380
#undef public_6b3b3a2
#undef public_6b3b3b2
#undef public_6b3b416
#undef public_6b3b430
#undef public_6b3b43d
#undef public_6b3b445
#undef public_6b3b44f
#undef public_6b3b456
#undef public_6b3b463
#undef public_6b3b46d
