#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d46d20);
CLANG_FORWARD_PROC_SYMBOL(public_6d56fd0);
CLANG_FORWARD_PROC_SYMBOL(public_6d574f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d63075);

#define public_6d46ed7 _public_6d46ed7
#define public_6d46ee3 _public_6d46ee3

PROC_DECLARE(0x6d46d20, internal_6d46d20, public_6d46d20);
extern "C" NAKED register_t __cdecl internal_6d46d20()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d63075 @0x6d46d22*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d63075
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x10], esi
        lea ecx, ds:[esi+0x384]
        mov dword ptr ss : [esp+0x24], 8
        call public_6d56fd0
        mov eax, dword ptr ds : [esi+0x378]
        mov ecx, dword ptr ds : [eax]
        lea edi, ds:[esi+0x374]
        push eax
        push ecx
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, edi
        mov byte ptr ss : [esp+0x30], 7
        call public_6d574f0
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6d5ffb0
        add esp, 4
        xor ebx, ebx
        push 1
        lea ecx, ds:[esi+0x364]
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov byte ptr ss : [esp+0x28], 6
        call dword ptr ds : [public_6d64b74]
        mov eax, dword ptr ds : [esi+0x2C4]
        push eax
        call public_6d5ffb0
        add esp, 4
        mov dword ptr ds : [esi+0x2C4], ebx
        mov dword ptr ds : [esi+0x2C8], ebx
        mov dword ptr ds : [esi+0x2CC], ebx
        mov eax, dword ptr ds : [esi+0x270]
        mov ecx, dword ptr ds : [eax]
        lea edi, ds:[esi+0x26C]
        push eax
        push ecx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, edi
        mov byte ptr ss : [esp+0x30], 4
        call dword ptr ds : [public_6d643a8]
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6d5ffb0
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov ebp, dword ptr ds : [esi+0x264]
        add esp, 4
        lea edi, ds:[esi+0x260]
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, edi
        mov byte ptr ss : [esp+0x28], 3
        call dword ptr ds : [public_6d64888]
        mov eax, dword ptr ds : [eax]
        push ebp
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, edi
        call dword ptr ds : [public_6d64884]
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6d5ffb0
        add esp, 4
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+0x254]
        mov ecx, dword ptr ds : [eax]
        lea edi, ds:[esi+0x250]
        push eax
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, edi
        mov byte ptr ss : [esp+0x30], 2
        call dword ptr ds : [public_6d643a8]
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6d5ffb0
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov ebp, dword ptr ds : [esi+0x248]
        add esp, 4
        lea edi, ds:[esi+0x244]
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, edi
        mov byte ptr ss : [esp+0x28], 1
        call dword ptr ds : [public_6d64888]
        mov ecx, dword ptr ds : [eax]
        push ebp
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, edi
        call dword ptr ds : [public_6d64884]
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6d5ffb0
        add esp, 4
        push 1
        lea ecx, ds:[esi+0x210]
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov byte ptr ss : [esp+0x28], bl
        call dword ptr ds : [public_6d64b58]
        mov eax, dword ptr ds : [esi+0x204]
        cmp eax, ebx
        je public_6d46ee3
        mov cl, byte ptr ds : [eax-1]
        cmp cl, bl
        je public_6d46ed7
        cmp cl, 0xFF
        je public_6d46ed7
        dec cl
        mov byte ptr ds : [eax-1], cl
        jmp public_6d46ee3
        public_6d46ed7 : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6d46ee3 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        mov dword ptr ds : [esi+0x204], ebx
        mov dword ptr ds : [esi+0x208], ebx
        mov dword ptr ds : [esi+0x20C], ebx
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x6d46d20)
    }
}

#undef public_6d46ed7
#undef public_6d46ee3
