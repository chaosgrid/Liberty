#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6306fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d30);
CLANG_FORWARD_PROC_SYMBOL(public_6391d3c);
CLANG_FORWARD_PROC_SYMBOL(public_6391d42);
CLANG_FORWARD_PROC_SYMBOL(public_6391d48);
CLANG_FORWARD_PROC_SYMBOL(public_6391d4e);
CLANG_FORWARD_PROC_SYMBOL(public_6391dc0);
CLANG_FORWARD_JUMP_SYMBOL(public_6396131);

#define public_63070b0 _public_63070b0
#define public_63070d1 _public_63070d1
#define public_63070d5 _public_63070d5
#define public_63070da _public_63070da
#define public_63072d5 _public_63072d5
#define public_63072ee _public_63072ee

PROC_DECLARE(0x6307010, internal_6307010, public_6307010);
extern "C" NAKED register_t __cdecl internal_6307010()
{
    __asm
    {
        push 0xFFFFFFFF
        mov eax, dword ptr fs : [0]
/*FIXUP push public_6396131 @0x6307018*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6396131
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x239C
        mov dword ptr fs : [0], esp
        call public_6391dc0
        push ebx
        push ebp
        push esi
        push edi
        lea ecx, ss:[esp+0x118]
        call public_6391d3c
        push 0x23
        lea eax, ss:[esp+0x3B0]
/*FIXUP push offset public_63a30e0 @0x6307048*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a30e0
        xor ebx, ebx
        push eax
        mov dword ptr ss : [esp+0x23C0], ebx
        call public_6306fe0
        add esp, 0xC
        push eax
        call dword ptr ds : [public_639911c]
        mov esi, dword ptr ss : [esp+0x23BC]
        push 0x23
        push esi
        lea ecx, ss:[esp+0x120]
        call public_6391d4e
        lea ecx, ss:[esp+0x118]
        call public_6391d48
        lea ecx, ss:[esp+0x118]
        call public_6391d42
        mov edx, eax
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, edx
        repne scasb
        not ecx
        dec ecx
        lea ebp, ds:[esi+0x24]
        lea eax, ds:[ecx+edx-4]
        lea esp, ss:[esp]
        public_63070b0 : nop
        mov dl, byte ptr ds : [eax]
        mov cl, dl
        cmp dl, byte ptr ss : [ebp]
        jne public_63070d5
        test cl, cl
        je public_63070d1
        mov dl, byte ptr ds : [eax+1]
        mov cl, dl
        cmp dl, byte ptr ss : [ebp+1]
        jne public_63070d5
        add eax, 2
        add ebp, 2
        test cl, cl
        jne public_63070b0
        public_63070d1 : nop
        xor eax, eax
        jmp public_63070da
        public_63070d5 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_63070da : nop
        cmp eax, ebx
        jne public_63072d5
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        push ebx
        push 3
        push ebx
        push ebx
        push ebx
/*FIXUP push offset public_63a2fbc @0x63070f2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a2fbc
        push 0x80000001
        mov dword ptr ss : [esp+0x34], ebx
        mov dword ptr ss : [esp+0x38], ebx
        call dword ptr ds : [public_6399010]
        test eax, eax
        jne public_63072d5
        mov edx, dword ptr ss : [esp+0x10]
        mov ebp, dword ptr ds : [public_639900c]
        or ecx, 0xFFFFFFFF
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        push ecx
        push esi
        mov ebx, 1
        push ebx
        push eax
/*FIXUP push offset public_63a30d4 @0x630712f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a30d4
        push edx
        call ebp
        lea ecx, ss:[esp+0x2D0]
        call public_6391d3c
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        push ecx
        push esi
        lea ecx, ss:[esp+0x2D8]
        mov byte ptr ss : [esp+0x23BC], bl
        call public_6391d4e
        lea ecx, ss:[esp+0x2D0]
        call public_6391d48
        mov eax, dword ptr ds : [public_63a3014]
        mov ecx, dword ptr ds : [public_63a3018]
        mov edx, dword ptr ds : [public_63a301c]
        mov dword ptr ss : [esp+0x98], eax
        mov ax, word ptr ds : [public_63a3020]
        mov dword ptr ss : [esp+0x9C], ecx
        mov word ptr ss : [esp+0xA4], ax
        xor eax, eax
        mov dword ptr ss : [esp+0xA0], edx
        mov edx, dword ptr ds : [public_63a3004]
        mov ecx, 0x1C
        lea edi, ss:[esp+0xA6]
        rep stosd
        mov ecx, dword ptr ds : [public_63a3000]
        stosw 
        mov eax, dword ptr ds : [public_63a3008]
        mov dword ptr ss : [esp+0x18], ecx
        mov ecx, dword ptr ds : [public_63a300c]
        mov dword ptr ss : [esp+0x1C], edx
        mov dl, byte ptr ds : [public_63a3010]
        mov dword ptr ss : [esp+0x24], ecx
        mov dword ptr ss : [esp+0x20], eax
        mov byte ptr ss : [esp+0x28], dl
        xor eax, eax
        mov ecx, 0x1B
        lea edi, ss:[esp+0x29]
        rep stosd
        stosw 
        lea ecx, ss:[esp+0x2D0]
        stosb 
        call public_6391d42
        mov esi, eax
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        push ecx
        mov ecx, dword ptr ss : [esp+0x14]
        push esi
        push ebx
        push eax
        lea eax, ss:[esp+0xA8]
        push eax
        push ecx
        call ebp
        lea ecx, ss:[esp+0x1F4]
        call public_6391d3c
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        push ecx
        push esi
        lea ecx, ss:[esp+0x1FC]
        mov byte ptr ss : [esp+0x23BC], 2
        call public_6391d4e
        lea ecx, ss:[esp+0x1F4]
        call public_6391d48
        lea ecx, ss:[esp+0x1F4]
        call public_6391d42
        mov edx, eax
        xor eax, eax
        or ecx, 0xFFFFFFFF
        mov edi, edx
        repne scasb
        not ecx
        dec ecx
        push ecx
        push edx
        push ebx
        push eax
        mov eax, dword ptr ss : [esp+0x20]
        lea edx, ss:[esp+0x28]
        push edx
        push eax
        call ebp
        mov ecx, dword ptr ss : [esp+0x10]
        push ecx
        call dword ptr ds : [public_6399014]
        lea ecx, ss:[esp+0x1F4]
        mov byte ptr ss : [esp+0x23B4], bl
        call public_6391d30
        lea ecx, ss:[esp+0x2D0]
        mov byte ptr ss : [esp+0x23B4], 0
        call public_6391d30
        lea ecx, ss:[esp+0x118]
        mov dword ptr ss : [esp+0x23B4], 0xFFFFFFFF
        call public_6391d30
        mov al, bl
        jmp public_63072ee
        public_63072d5 : nop
        lea ecx, ss:[esp+0x118]
        mov dword ptr ss : [esp+0x23B4], 0xFFFFFFFF
        call public_6391d30
        xor al, al
        public_63072ee : nop
        mov ecx, dword ptr ss : [esp+0x23AC]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x23A8
        ret 
        UNREACHABLE_TRAP(0x6307010)
    }
}

#undef public_63070b0
#undef public_63070d1
#undef public_63070d5
#undef public_63070da
#undef public_63072d5
#undef public_63072ee
