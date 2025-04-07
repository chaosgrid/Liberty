#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62df5d0);
CLANG_FORWARD_PROC_SYMBOL(public_62df740);

#define public_62df5fd _public_62df5fd
#define public_62df63b _public_62df63b
#define public_62df660 _public_62df660
#define public_62df684 _public_62df684
#define public_62df688 _public_62df688
#define public_62df6d5 _public_62df6d5
#define public_62df6e0 _public_62df6e0
#define public_62df72c _public_62df72c

PROC_DECLARE(0x62df5d0, internal_62df5d0, public_62df5d0);
extern "C" NAKED register_t __cdecl internal_62df5d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 0x114
        push ebx
        push esi
        push edi
/*FIXUP push offset public_63a0730 @0x62df5dd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a0730
        push eax
        call dword ptr ds : [public_6399288]
        mov edi, eax
        xor esi, esi
        add esp, 8
        cmp edi, esi
        jne public_62df5fd
/*FIXUP push offset public_63a06f8 @0x62df5f4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a06f8
        push 0x7D
        jmp public_62df63b
        public_62df5fd : nop
        mov ebx, dword ptr ds : [public_6399200]
        lea edx, ss:[esp+0xC]
        push edx
/*FIXUP push offset public_63a06f0 @0x62df608*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a06f0
        push edi
        mov dword ptr ss : [esp+0x18], esi
        call ebx
        lea eax, ss:[esp+0x20]
        push eax
/*FIXUP push offset public_63a06f0 @0x62df619*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a06f0
        push edi
        mov dword ptr ss : [esp+0x2C], esi
        call ebx
        mov eax, dword ptr ss : [esp+0x2C]
        add esp, 0x18
        cmp eax, 0x15
        je public_62df660
/*FIXUP push offset public_63a0680 @0x62df631*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a0680
        push 0x8D
        public_62df63b : nop
        mov ecx, dword ptr ds : [public_6399028]
/*FIXUP push offset public_63a064c @0x62df641*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a064c
        mov eax, 0x100001
/*FIXUP push offset public_639b47c @0x62df64b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b47c
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        pop edi
        pop esi
        pop ebx
        add esp, 0x114
        ret 
        public_62df660 : nop
        mov edx, dword ptr ss : [esp+0xC]
        push edx
        mov ecx, offset public_63fca18
        call public_62df740
        cmp dword ptr ss : [esp+0xC], esi
        mov dword ptr ss : [esp+0x18], esi
        jle public_62df72c
        push ebp
        mov dword ptr ss : [esp+0x14], esi
        jmp public_62df688
        public_62df684 : nop
        mov esi, dword ptr ss : [esp+0x14]
        public_62df688 : nop
        mov eax, dword ptr ds : [public_63fca1c]
        lea ecx, ds:[esi+eax+8]
        push ecx
/*FIXUP push offset public_639c454 @0x62df692*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639c454
        push edi
        call ebx
        lea edx, ss:[esp+0x30]
        push edx
/*FIXUP push offset public_639c454 @0x62df69f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639c454
        push edi
        call ebx
        lea eax, ss:[esp+0x3C]
/*FIXUP push offset public_63a0644 @0x62df6ab*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a0644
        push eax
        call dword ptr ds : [public_63991ec]
        mov ecx, dword ptr ds : [public_63fca1c]
        add esp, 0x20
        neg eax
        sbb eax, eax
        neg eax
        mov dword ptr ds : [esi+ecx+4], eax
        add esi, 0x48
        mov dword ptr ss : [esp+0x20], 0x15
        public_62df6d5 : nop
        mov ebp, 0x15
        lea ebx, ds:[ebx]
        public_62df6e0 : nop
        mov edx, dword ptr ds : [public_63fca1c]
        lea eax, ds:[esi+edx]
        push eax
/*FIXUP push offset public_63a0640 @0x62df6ea*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a0640
        push edi
        call ebx
        add esp, 0xC
        add esi, 4
        dec ebp
        jne public_62df6e0
        dec dword ptr ss : [esp+0x20]
        jne public_62df6d5
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [public_63fca1c]
        mov dword ptr ds : [ecx+edx], eax
        add ecx, 0x72C
        inc eax
        mov dword ptr ss : [esp+0x14], ecx
        cmp eax, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x1C], eax
        jl public_62df684
        pop ebp
        public_62df72c : nop
        push edi
        call dword ptr ds : [public_63992d4]
        add esp, 4
        pop edi
        pop esi
        pop ebx
        add esp, 0x114
        ret 
        UNREACHABLE_TRAP(0x62df5d0)
    }
}

#undef public_62df5fd
#undef public_62df63b
#undef public_62df660
#undef public_62df684
#undef public_62df688
#undef public_62df6d5
#undef public_62df6e0
#undef public_62df72c
