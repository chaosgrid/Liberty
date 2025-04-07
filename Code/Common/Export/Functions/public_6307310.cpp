#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d30);
CLANG_FORWARD_PROC_SYMBOL(public_6391d3c);
CLANG_FORWARD_PROC_SYMBOL(public_6391d42);
CLANG_FORWARD_PROC_SYMBOL(public_6391d48);
CLANG_FORWARD_PROC_SYMBOL(public_6391d4e);
CLANG_FORWARD_JUMP_SYMBOL(public_639608b);

#define public_63073d3 _public_63073d3
#define public_63073f3 _public_63073f3
#define public_63073f7 _public_63073f7
#define public_63073fc _public_63073fc
#define public_6307413 _public_6307413
#define public_6307422 _public_6307422
#define public_6307436 _public_6307436

PROC_DECLARE(0x6307310, internal_6307310, public_6307310);
extern "C" NAKED register_t __cdecl internal_6307310()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_639608b @0x6307312*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_639608b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x114
        lea eax, ss:[esp+4]
        push eax
        push 1
        push 0
/*FIXUP push offset public_63a2fbc @0x6307334*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a2fbc
        push 0x80000001
        mov dword ptr ss : [esp+0x18], 0
        mov byte ptr ss : [esp+0x17], 0
        call dword ptr ds : [public_6399008]
        test eax, eax
        jne public_6307436
        lea ecx, ss:[esp+8]
        push ecx
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        push eax
        mov eax, dword ptr ss : [esp+0x14]
/*FIXUP push offset public_63a30d4 @0x6307369*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a30d4
        push eax
        mov dword ptr ss : [esp+0x20], 0x29
        call dword ptr ds : [public_6399018]
        test eax, eax
        jne public_6307436
        push esi
        push edi
        lea ecx, ss:[esp+0x40]
        call public_6391d3c
        push 0x23
        lea ecx, ss:[esp+0x18]
        push ecx
        lea ecx, ss:[esp+0x48]
        mov dword ptr ss : [esp+0x12C], 0
        call public_6391d4e
        lea ecx, ss:[esp+0x40]
        call public_6391d48
        lea ecx, ss:[esp+0x40]
        call public_6391d42
        mov edx, eax
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, edx
        repne scasb
        not ecx
        dec ecx
        lea esi, ss:[esp+0x38]
        lea eax, ds:[ecx+edx-4]
        public_63073d3 : nop
        mov dl, byte ptr ds : [eax]
        mov cl, dl
        cmp dl, byte ptr ds : [esi]
        jne public_63073f7
        test cl, cl
        je public_63073f3
        mov dl, byte ptr ds : [eax+1]
        mov cl, dl
        cmp dl, byte ptr ds : [esi+1]
        jne public_63073f7
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_63073d3
        public_63073f3 : nop
        xor eax, eax
        jmp public_63073fc
        public_63073f7 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_63073fc : nop
        test eax, eax
        pop edi
        pop esi
        jne public_6307422
        mov edx, dword ptr ss : [esp+0x124]
        lea ecx, ss:[esp+0xC]
        lea eax, ss:[esp+0xC]
        sub edx, ecx
        public_6307413 : nop
        mov cl, byte ptr ds : [eax]
        mov byte ptr ds : [edx+eax], cl
        inc eax
        test cl, cl
        jne public_6307413
        mov byte ptr ss : [esp+3], 1
        public_6307422 : nop
        lea ecx, ss:[esp+0x38]
        mov dword ptr ss : [esp+0x11C], 0xFFFFFFFF
        call public_6391d30
        public_6307436 : nop
        mov edx, dword ptr ss : [esp+4]
        push edx
        call dword ptr ds : [public_6399014]
        mov ecx, dword ptr ss : [esp+0x114]
        mov al, byte ptr ss : [esp+3]
        mov dword ptr fs : [0], ecx
        add esp, 0x120
        ret 
        UNREACHABLE_TRAP(0x6307310)
    }
}

#undef public_63073d3
#undef public_63073f3
#undef public_63073f7
#undef public_63073fc
#undef public_6307413
#undef public_6307422
#undef public_6307436
