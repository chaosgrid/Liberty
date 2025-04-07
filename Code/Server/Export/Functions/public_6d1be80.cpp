#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d0b7e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d0f1f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d1ad30);
CLANG_FORWARD_PROC_SYMBOL(public_6d1b720);
CLANG_FORWARD_PROC_SYMBOL(public_6d1be80);
CLANG_FORWARD_PROC_SYMBOL(public_6d1c230);
CLANG_FORWARD_PROC_SYMBOL(public_6d1f8b0);
CLANG_FORWARD_PROC_SYMBOL(public_6d1f9b0);
CLANG_FORWARD_PROC_SYMBOL(public_6d20510);
CLANG_FORWARD_PROC_SYMBOL(public_6d22070);
CLANG_FORWARD_PROC_SYMBOL(public_6d22520);
CLANG_FORWARD_PROC_SYMBOL(public_6d27a60);
CLANG_FORWARD_PROC_SYMBOL(public_6d29370);
CLANG_FORWARD_JUMP_SYMBOL(public_6d62272);

#define public_6d1bfb1 _public_6d1bfb1
#define public_6d1c099 _public_6d1c099
#define public_6d1c0c3 _public_6d1c0c3
#define public_6d1c14a _public_6d1c14a
#define public_6d1c14e _public_6d1c14e

PROC_DECLARE(0x6d1be80, internal_6d1be80, public_6d1be80);
extern "C" NAKED register_t __cdecl internal_6d1be80()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push 0xFFFFFFFF
/*FIXUP push public_6d62272 @0x6d1be82*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d62272
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x40
        mov al, byte ptr ss : [esp+0x54]
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        xor edi, edi
        push edi
        lea ecx, ss:[esp+0x34]
        mov dword ptr ss : [esp+0x28], esi
        mov byte ptr ss : [esp+0x34], al
        call dword ptr ds : [public_6d64b58]
        lea ebp, ds:[esi+4]
        mov dword ptr ss : [esp+0x58], edi
        mov dword ptr ss : [ebp], edi
        mov dword ptr ss : [ebp+4], 0x160
        mov edx, dword ptr ss : [esp+0x68]
        mov ecx, dword ptr ss : [esp+0x64]
        mov ebx, dword ptr ss : [esp+0x60]
        mov dword ptr ds : [esi+0x10], edi
        mov dword ptr ds : [esi+0x14], edi
        mov dword ptr ds : [esi+0x18], ecx
        mov byte ptr ds : [esi+0xC], 0
        mov byte ptr ds : [esi+0xD], 1
        mov byte ptr ds : [esi+0xE], 1
        mov dword ptr ds : [esi+0x1C], edx
        mov eax, dword ptr ds : [public_6d68a50]
        mov dword ptr ds : [esi+0x20], eax
        mov ecx, dword ptr ds : [public_6d68a54]
        mov dword ptr ds : [esi+0x24], ecx
        mov dl, byte ptr ds : [ebx]
        lea edi, ds:[esi+0x28]
        push 0
        mov ecx, edi
        mov byte ptr ss : [esp+0x5C], 1
        mov byte ptr ds : [edi], dl
        call dword ptr ds : [public_6d64b58]
        mov eax, dword ptr ds : [public_6d64b64]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push 0
        push ebx
        mov ecx, edi
        call dword ptr ds : [public_6d64b6c]
        lea edx, ss:[esp+0x30]
        push edx
        lea ecx, ds:[esi+0x38]
        mov byte ptr ss : [esp+0x5C], 2
        call dword ptr ds : [public_6d64ae0]
        lea eax, ss:[esp+0x64]
        push eax
        lea ecx, ds:[esi+0x48]
        mov byte ptr ss : [esp+0x5C], 3
        call public_6d22520
        lea ebx, ds:[esi+0x54]
        mov byte ptr ds : [ebx], 0
        mov dword ptr ds : [ebx+4], 0
        lea edx, ss:[esp+0x68]
        lea ecx, ds:[esi+0x5C]
        push edx
        mov byte ptr ss : [esp+0x5C], 5
        call public_6d1ad30
        mov dword ptr ds : [esi], offset public_6d68a20
        push 1
        lea ecx, ss:[esp+0x34]
        mov byte ptr ss : [esp+0x5C], 7
        call dword ptr ds : [public_6d64b58]
/*FIXUP push offset _public_6d1b720 @0x6d1bf81*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d1b720
        mov dword ptr ds : [esi], offset public_6d68a6c
        call dword ptr ds : [public_6d64c54]
        add esp, 4
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ds : [esi+0x18]
        test ah, 1
        mov byte ptr ss : [esp+0x58], 8
        je public_6d1bfb1
        push 1
        push edi
        call public_6d27a60
        add esp, 8
        public_6d1bfb1 : nop
        mov eax, dword ptr ds : [esi+0x18]
        lea ecx, ss:[esp+0x64]
        push ecx
        lea ecx, ss:[esp+0x44]
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ds : [esi+0x10], 0
        call public_6d0f1f0
        mov ecx, edi
        mov byte ptr ss : [esp+0x58], 9
        call dword ptr ds : [public_6d64b8c]
        mov eax, dword ptr ds : [edi+4]
        lea edx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x1C], edx
        mov dword ptr ss : [esp+0x28], ebp
        mov byte ptr ss : [esp+0x2C], 0
        mov eax, dword ptr ss : [esp+0x14]
        lea ecx, ss:[esp+0x40]
        push ecx
        lea edx, ss:[esp+0x64]
        push edx
        mov dword ptr ss : [esp+0x68], eax
        push 0
        lea eax, ss:[esp+0x28]
        push eax
        mov ecx, esi
        mov byte ptr ss : [esp+0x68], 0xA
        call public_6d1c230
        mov ebp, eax
        test ebp, ebp
        setne cl
        lea edx, ss:[esp+0x14]
        mov byte ptr ss : [esp+0x14], cl
        push edx
        mov ecx, ebx
        mov byte ptr ss : [esp+0x30], 1
        mov dword ptr ss : [esp+0x1C], ebp
        call public_6d22070
        lea ecx, ss:[esp+0x14]
        call public_6d29370
        lea eax, ds:[esi+0x5C]
        push eax
        lea eax, ss:[esp+0x44]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, ebp
        call public_6d20510
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [esi+0x20], edx
        mov eax, dword ptr ds : [eax+4]
        mov ecx, edi
        mov dword ptr ds : [esi+0x24], eax
        mov byte ptr ds : [esi+0xD], 1
        call dword ptr ds : [public_6d64b8c]
        mov ecx, dword ptr ds : [esi+0x18]
        mov eax, dword ptr ds : [edi+4]
        and ecx, 4
        cmp cl, 4
        mov dword ptr ss : [esp+0x68], eax
        je public_6d1c0c3
        cmp dword ptr ss : [ebp+0x10], 1
        jne public_6d1c0c3
        mov ecx, edi
        call dword ptr ds : [public_6d64b8c]
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        je public_6d1c099
        mov edx, dword ptr ds : [edi+8]
        lea eax, ds:[eax+edx*2]
        public_6d1c099 : nop
        cmp dword ptr ss : [esp+0x68], eax
        je public_6d1c0c3
        mov ecx, edi
        call dword ptr ds : [public_6d64b00]
        push eax
        lea eax, ss:[esp+0x6C]
        push eax
        lea ecx, ss:[esp+0x68]
        call public_6d1f8b0
        cmp eax, 4
        jne public_6d1c0c3
        and dword ptr ds : [esi+0x18], 0xFFFFFFEF
        mov byte ptr ds : [esi+0xD], 0
        public_6d1c0c3 : nop
        mov ecx, edi
        call dword ptr ds : [public_6d64b8c]
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0x68], eax
        mov eax, dword ptr ds : [esi+0x18]
        mov ecx, eax
        and ecx, 0x10
        cmp cl, 0x10
        je public_6d1c14e
        and eax, 8
        cmp al, 8
        jne public_6d1c14e
        cmp dword ptr ss : [ebp+0x10], 1
        jne public_6d1c14e
        mov ecx, edi
        call dword ptr ds : [public_6d64b00]
        cmp dword ptr ss : [esp+0x68], eax
        je public_6d1c14e
        mov ecx, edi
        call dword ptr ds : [public_6d64b00]
        push eax
        lea edx, ss:[esp+0x6C]
        push edx
        lea ecx, ss:[esp+0x68]
        call public_6d1f8b0
        cmp eax, 7
        jne public_6d1c14e
        mov ecx, edi
        call dword ptr ds : [public_6d64b00]
        cmp dword ptr ss : [esp+0x68], eax
        je public_6d1c14e
        mov ecx, edi
        call dword ptr ds : [public_6d64b00]
        push eax
        lea eax, ss:[esp+0x6C]
        push eax
        lea ecx, ss:[esp+0x68]
        call public_6d1f9b0
        add eax, 0xFFFFFFF7
        cmp eax, 4
        ja public_6d1c14e
/*FIXUP jmp dword ptr ds : [eax*4+public_6d1c188] @0x6d1c143*/
  JMPTB cmp eax, 0
  JMPTB je public_6d1c14a
  JMPTB cmp eax, 1
  JMPTB je public_6d1c14a
  JMPTB cmp eax, 2
  JMPTB je public_6d1c14e
  JMPTB cmp eax, 3
  JMPTB je public_6d1c14a
  JMPTB cmp eax, 4
  JMPTB je public_6d1c14a
  JMPTB int 3
        public_6d1c14a : nop
        mov byte ptr ds : [esi+0xD], 0
        public_6d1c14e : nop
        lea ecx, ss:[esp+0x40]
        mov byte ptr ss : [esp+0x58], 8
        call public_6d0b7e0
        mov ecx, dword ptr ss : [esp+0x20]
        push ecx
        mov byte ptr ss : [esp+0x5C], 7
        call dword ptr ds : [public_6d64c54]
        mov ecx, dword ptr ss : [esp+0x54]
        add esp, 4
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x4C
        ret 0xC
        UNREACHABLE_TRAP(0x6d1be80)
        ASM_EXPORT_ENTRY_FIRST(0x6d1c14a, public_6d1c14a)
        ASM_EXPORT_ENTRY_LAST(0x6d1c14e, public_6d1c14e)
    }
}

#undef public_6d1bfb1
#undef public_6d1c099
#undef public_6d1c0c3
#undef public_6d1c14a
#undef public_6d1c14e

#pragma init_seg(compiler)
extern "C" void const* const public_6d1c14a = __AsmFindLabelExport(&internal_6d1be80, 0x6d1c14a);
extern "C" void const* const public_6d1c14e = __AsmFindLabelExport(&internal_6d1be80, 0x6d1c14e);
