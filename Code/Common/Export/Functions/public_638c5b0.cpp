#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343f70);
CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_6377de0);
CLANG_FORWARD_PROC_SYMBOL(public_6378600);
CLANG_FORWARD_PROC_SYMBOL(public_638c5b0);

#define public_638c5d9 _public_638c5d9
#define public_638c613 _public_638c613
#define public_638c61e _public_638c61e
#define public_638c64c _public_638c64c
#define public_638c663 _public_638c663
#define public_638c678 _public_638c678

PROC_DECLARE(0x638c5b0, internal_638c5b0, public_638c5b0);
extern "C" NAKED register_t __cdecl internal_638c5b0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ds : [public_658b23c]
        push ebx
        push esi
        xor ebx, ebx
        test eax, eax
        push edi
        mov dword ptr ss : [esp+0xC], eax
        jne public_638c5d9
/*FIXUP push offset public_63f9ed8 @0x638c5c3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f9ed8
        call public_6356960
        push ebx
        push ebx
        push 1
        call public_6378600
        add esp, 0x10
        public_638c5d9 : nop
        mov esi, dword ptr ss : [esp+0x14]
        lea eax, ds:[esi*8]
        push eax
        call public_6343f70
        add esp, 4
        test eax, eax
        mov dword ptr ds : [public_658b240], eax
        jne public_638c613
/*FIXUP push offset public_63f2218 @0x638c5f6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f2218
        call public_6356960
        push 0
        push 0
        push 4
        call public_6378600
        mov eax, dword ptr ds : [public_658b240]
        add esp, 0x10
        public_638c613 : nop
        mov edi, eax
        mov eax, dword ptr ss : [esp+0xC]
        cmp byte ptr ds : [eax], 0
        je public_638c663
        public_638c61e : nop
        lea ecx, ss:[esp+0xC]
        push ecx
        push eax
        call public_6377de0
        add esp, 8
        inc ebx
        cmp ebx, esi
        jg public_638c64c
        fstp qword ptr ds : [edi]
        mov eax, dword ptr ss : [esp+0xC]
        mov cl, byte ptr ds : [eax]
        add edi, 8
        test cl, cl
        je public_638c663
        inc eax
        mov dword ptr ss : [esp+0xC], eax
        cmp byte ptr ds : [eax], 0
        jne public_638c61e
        jmp public_638c663
        public_638c64c : nop
        mov edx, dword ptr ds : [public_658b23c]
        fstp st(0)
        push esi
        push edx
/*FIXUP push offset public_63f9e94 @0x638c656*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f9e94
        call public_6356960
        add esp, 0xC
        public_638c663 : nop
        inc ebx
        cmp ebx, esi
        jg public_638c678
        sub esi, ebx
        lea ecx, ds:[esi+esi+2]
        and ecx, 0x3FFFFFFE
        xor eax, eax
        rep stosd
        public_638c678 : nop
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x638c5b0)
    }
}

#undef public_638c5d9
#undef public_638c613
#undef public_638c61e
#undef public_638c64c
#undef public_638c663
#undef public_638c678
