#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4347e0);
CLANG_FORWARD_PROC_SYMBOL(public_4aeab0);
CLANG_FORWARD_PROC_SYMBOL(public_4aebb0);
CLANG_FORWARD_PROC_SYMBOL(public_4aeca0);
CLANG_FORWARD_PROC_SYMBOL(public_4aed70);
CLANG_FORWARD_PROC_SYMBOL(public_4aee30);
CLANG_FORWARD_PROC_SYMBOL(public_4af230);
CLANG_FORWARD_PROC_SYMBOL(public_4af900);
CLANG_FORWARD_PROC_SYMBOL(public_4b06a0);
CLANG_FORWARD_PROC_SYMBOL(public_4b0920);
CLANG_FORWARD_PROC_SYMBOL(public_4b1c00);
CLANG_FORWARD_PROC_SYMBOL(public_4b2540);
CLANG_FORWARD_PROC_SYMBOL(public_4b2700);
CLANG_FORWARD_PROC_SYMBOL(public_575d60);
CLANG_FORWARD_PROC_SYMBOL(public_575d70);
CLANG_FORWARD_PROC_SYMBOL(public_576f40);

#define public_4b273b _public_4b273b
#define public_4b2765 _public_4b2765
#define public_4b27b1 _public_4b27b1
#define public_4b27ba _public_4b27ba
#define public_4b2813 _public_4b2813
#define public_4b281f _public_4b281f
#define public_4b282b _public_4b282b
#define public_4b2834 _public_4b2834
#define public_4b283d _public_4b283d
#define public_4b28ac _public_4b28ac
#define public_4b28bd _public_4b28bd

PROC_DECLARE(0x4b2700, internal_4b2700, public_4b2700);
extern "C" NAKED register_t __cdecl internal_4b2700()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x80
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x7F4]
        test eax, eax
        jne public_4b2765
        push edi
        call public_575d70
        mov edi, eax
        call public_575d60
        push edi
        mov ebx, eax
        call public_576f40
        add esp, 4
        cmp eax, 1
        pop edi
        jae public_4b273b
        push ebx
        call public_576f40
        add esp, 4
/*FIXUP public_4b273b : nop
        push offset public_5d4cbc @0x4b273b*/
  FIXUP public_4b273b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4cbc
        mov ecx, esi
        call public_4af230
        mov ecx, dword ptr ds : [esi+0x4B8]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 0
        push 0x3B
        call dword ptr ds : [eax+0xA8]
        push eax
        mov ecx, esi
        call public_4af900
        jmp public_4b27ba
        public_4b2765 : nop
        mov al, byte ptr ds : [esi+0x84D]
        test al, al
        je public_4b27b1
        mov edx, dword ptr ds : [esi+0x8B8]
        xor ecx, ecx
        mov cl, byte ptr ds : [esi+0x8BC]
        push ecx
        push edx
        mov ecx, esi
        call public_4b1c00
        mov cl, byte ptr ds : [esi+0x8BC]
        mov eax, dword ptr ds : [esi+0x8B8]
        mov byte ptr ds : [esi+0x334], cl
        push 0x536
        mov ecx, esi
        mov byte ptr ds : [esi+0x84D], 0
        mov dword ptr ds : [esi+0x330], eax
        call public_4b0920
        public_4b27b1 : nop
        push 1
        mov ecx, esi
        call public_4b06a0
        public_4b27ba : nop
        mov edx, dword ptr ds : [esi+0x7AC]
        mov byte ptr ds : [esi+0x848], 0
        mov eax, dword ptr ds : [public_679b94]
        mov dword ptr ds : [edx+0x348], eax
        mov eax, dword ptr ds : [esi+0x7A8]
        mov byte ptr ds : [eax+0x37C], 1
        mov eax, dword ptr ds : [esi+0x7A8]
        mov bl, byte ptr ds : [eax+0x388]
        and bl, 0xFB
        push 0
        mov ecx, esi
        mov byte ptr ds : [eax+0x388], bl
        call public_4b2540
        mov eax, dword ptr ds : [esi+0x7F4]
        cmp eax, 4
        ja public_4b28ac
/*FIXUP jmp dword ptr ds : [eax*4+public_4b28c8] @0x4b280c*/
  JMPTB cmp eax, 0
  JMPTB je public_4b2813
  JMPTB cmp eax, 1
  JMPTB je public_4b281f
  JMPTB cmp eax, 2
  JMPTB je public_4b282b
  JMPTB cmp eax, 3
  JMPTB je public_4b2834
  JMPTB cmp eax, 4
  JMPTB je public_4b283d
  JMPTB int 3
        public_4b2813 : nop
        mov ecx, esi
        call public_4aeab0
        jmp public_4b28ac
        public_4b281f : nop
        mov ecx, esi
        call public_4aebb0
        jmp public_4b28ac
        public_4b282b : nop
        mov ecx, esi
        call public_4aeca0
        jmp public_4b28ac
        public_4b2834 : nop
        mov ecx, esi
        call public_4aed70
        jmp public_4b28ac
        public_4b283d : nop
        mov eax, dword ptr ds : [esi+0x7F0]
        mov cl, byte ptr ds : [eax+0x6C]
        mov bl, 0xFC
        and cl, bl
        mov byte ptr ds : [eax+0x6C], cl
        mov ecx, dword ptr ds : [esi+0x374]
        mov edx, dword ptr ds : [public_679bb0]
        push 0x40
        lea eax, ss:[esp+0xC]
        push eax
        mov dword ptr ds : [ecx+0x348], edx
        mov ecx, dword ptr ds : [public_67eca8]
        push 0x5E4
        push ecx
        call public_4347e0
        mov ecx, dword ptr ds : [esi+0x7B4]
        mov edx, dword ptr ds : [ecx]
        add esp, 0x10
        push 0
        lea eax, ss:[esp+0xC]
        push eax
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ds : [esi+0x7B0]
        and byte ptr ds : [eax+0x6C], bl
        mov eax, dword ptr ds : [esi+0x7B4]
        and byte ptr ds : [eax+0x6C], bl
        mov eax, dword ptr ds : [esi+0x344]
        and byte ptr ds : [eax+0x6C], bl
        public_4b28ac : nop
        mov al, byte ptr ds : [esi+0x848]
        test al, al
        jne public_4b28bd
        mov ecx, esi
        call public_4aee30
        public_4b28bd : nop
        pop esi
        pop ebx
        add esp, 0x80
        ret 
        UNREACHABLE_TRAP(0x4b2700)
        ASM_EXPORT_ENTRY_SINGLE(0x4b283d, public_4b283d)
    }
}

#undef public_4b273b
#undef public_4b2765
#undef public_4b27b1
#undef public_4b27ba
#undef public_4b2813
#undef public_4b281f
#undef public_4b282b
#undef public_4b2834
#undef public_4b283d
#undef public_4b28ac
#undef public_4b28bd

#pragma init_seg(compiler)
extern "C" void const* const public_4b283d = __AsmFindLabelExport(&internal_4b2700, 0x4b283d);
