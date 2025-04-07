#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_413df0);
CLANG_FORWARD_PROC_SYMBOL(public_4144b0);
CLANG_FORWARD_PROC_SYMBOL(public_4144f0);
CLANG_FORWARD_PROC_SYMBOL(public_444e20);
CLANG_FORWARD_PROC_SYMBOL(public_445d70);
CLANG_FORWARD_PROC_SYMBOL(public_445dc0);
CLANG_FORWARD_PROC_SYMBOL(public_4b2130);
CLANG_FORWARD_PROC_SYMBOL(public_4b6420);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5bcffe);

#define public_4b219b _public_4b219b
#define public_4b21b3 _public_4b21b3
#define public_4b21cb _public_4b21cb
#define public_4b21cf _public_4b21cf
#define public_4b22c6 _public_4b22c6
#define public_4b22d3 _public_4b22d3
#define public_4b22ed _public_4b22ed
#define public_4b22fc _public_4b22fc
#define public_4b2309 _public_4b2309
#define public_4b2374 _public_4b2374
#define public_4b2419 _public_4b2419

PROC_DECLARE(0x4b2130, internal_4b2130, public_4b2130);
extern "C" NAKED register_t __cdecl internal_4b2130()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5bcffe @0x4b2138*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bcffe
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xE4
        push ebx
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0x7F4]
        xor ebx, ebx
        cmp eax, ebx
        push esi
        push edi
        jne public_4b22c6
        mov ecx, dword ptr ss : [ebp+0x4B8]
        mov eax, dword ptr ds : [ecx]
        push ebx
        push ebx
        push 0x3B
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ss : [ebp+0x838]
        sub ecx, ebx
        je public_4b21b3
        dec ecx
        je public_4b219b
        dec ecx
        jne public_4b21cb
        mov ecx, dword ptr ss : [esp+0x104]
        mov ebp, dword ptr ss : [ebp+0x820]
        add eax, ecx
        imul eax, 0x2C
        mov esi, dword ptr ds : [eax+ebp+0x1C]
        jmp public_4b21cf
        public_4b219b : nop
        mov edx, dword ptr ss : [esp+0x104]
        mov ebp, dword ptr ss : [ebp+0x810]
        add eax, edx
        imul eax, 0x2C
        mov esi, dword ptr ds : [eax+ebp+0x1C]
        jmp public_4b21cf
        public_4b21b3 : nop
        mov ecx, dword ptr ss : [esp+0x104]
        mov ebp, dword ptr ss : [ebp+0x800]
        add eax, ecx
        imul eax, 0x2C
        mov esi, dword ptr ds : [eax+ebp+0x1C]
        jmp public_4b21cf
        public_4b21cb : nop
        mov esi, dword ptr ss : [esp+0x10]
        public_4b21cf : nop
        cmp esi, ebx
        jle public_4b2419
        mov dword ptr ss : [esp+0x98], ebx
        mov dword ptr ss : [esp+0x9C], ebx
        lea ecx, ss:[esp+0xA0]
        mov dword ptr ss : [esp+0xFC], ebx
        call public_4144b0
        or edi, 0xFFFFFFFF
        push edi
        push ebx
        lea ecx, ss:[esp+0xA0]
        mov byte ptr ss : [esp+0x104], 1
        mov dword ptr ss : [esp+0x9C], ebx
        mov dword ptr ss : [esp+0x98], edi
        mov dword ptr ss : [esp+0xDC], ebx
        call public_413df0
        mov byte ptr ss : [esp+0xF0], bl
        push 0x3E4CCCCD
        lea edx, ss:[esp+0x94]
        push ebx
        push edx
        mov dword ptr ss : [esp+0x108], 2
        mov dword ptr ss : [esp+0x9C], esi
        mov dword ptr ss : [esp+0xA0], esi
        call public_4b6420
        add esp, 0xC
        mov ebx, 3
        lea eax, ss:[esp+0xA0]
        mov dword ptr ss : [esp+0xFC], ebx
        mov dword ptr ss : [esp+0x10], eax
        lea ecx, ss:[esp+0xA0]
        mov byte ptr ss : [esp+0xFC], 5
        call public_4144f0
        lea ecx, ss:[esp+0xAC]
        mov byte ptr ss : [esp+0xFC], 4
        call public_445d70
        lea ecx, ss:[esp+0xA0]
        mov byte ptr ss : [esp+0xFC], bl
        call public_444e20
        lea ecx, ss:[esp+0x98]
        mov dword ptr ss : [esp+0xFC], edi
        call public_444e20
        jmp public_4b2419
        public_4b22c6 : nop
        cmp eax, 1
        jne public_4b22d3
        mov ecx, dword ptr ss : [ebp+0x508]
        jmp public_4b22fc
        public_4b22d3 : nop
        cmp eax, 2
        jne public_4b22ed
        mov eax, dword ptr ss : [esp+0x104]
        mov ecx, dword ptr ss : [ebp+0x548]
        lea eax, ds:[eax+eax*2]
        lea esi, ds:[ecx+eax*8]
        jmp public_4b2309
        public_4b22ed : nop
        cmp eax, 3
        jne public_4b2419
        mov ecx, dword ptr ss : [ebp+0x528]
        public_4b22fc : nop
        mov eax, dword ptr ss : [esp+0x104]
        lea edx, ds:[eax+eax*2]
        lea esi, ds:[ecx+edx*8]
        public_4b2309 : nop
        lea edi, ss:[esp+0x78]
        mov ecx, 6
        rep movsd
        mov esi, dword ptr ss : [esp+0x7C]
        cmp esi, ebx
        jle public_4b2419
        cmp byte ptr ss : [ebp+0x84C], bl
        jne public_4b2419
        cmp byte ptr ss : [ebp+0x84D], bl
        jne public_4b2419
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], ebx
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0xFC], 6
        call public_4144b0
        mov eax, dword ptr ss : [esp+0x1C]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x58], ebx
        je public_4b2374
        cmp word ptr ds : [eax], bx
        je public_4b2374
        mov word ptr ds : [eax], bx
        public_4b2374 : nop
        mov byte ptr ss : [esp+0x74], bl
        push 0x3E4CCCCD
        lea eax, ss:[esp+0x18]
        push ebx
        push eax
        mov dword ptr ss : [esp+0x108], 8
        mov dword ptr ss : [esp+0x20], esi
        mov dword ptr ss : [esp+0x24], esi
        call public_4b6420
        add esp, 0xC
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0xFC], 9
        mov dword ptr ss : [esp+0x10], ecx
        lea ecx, ss:[esp+0x24]
        mov byte ptr ss : [esp+0xFC], 0xB
        call public_4144f0
        mov edx, dword ptr ss : [esp+0x38]
        mov eax, dword ptr ss : [esp+0x34]
        push edx
        push eax
        lea ecx, ss:[esp+0x38]
        mov byte ptr ss : [esp+0x104], 0xA
        call public_445dc0
        mov ecx, dword ptr ss : [esp+0x34]
        push ecx
        call public_5b7e1d
        add esp, 4
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x34], ebx
        mov dword ptr ss : [esp+0x38], ebx
        mov dword ptr ss : [esp+0x3C], ebx
        mov byte ptr ss : [esp+0xFC], 9
        call public_444e20
        mov eax, dword ptr ss : [esp+0x1C]
        cmp eax, ebx
        je public_4b2419
        push eax
        call dword ptr ds : [public_5c71d8]
        add esp, 4
        public_4b2419 : nop
        mov ecx, dword ptr ss : [esp+0xF4]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0xF0
        ret 4
        UNREACHABLE_TRAP(0x4b2130)
    }
}

#undef public_4b219b
#undef public_4b21b3
#undef public_4b21cb
#undef public_4b21cf
#undef public_4b22c6
#undef public_4b22d3
#undef public_4b22ed
#undef public_4b22fc
#undef public_4b2309
#undef public_4b2374
#undef public_4b2419
