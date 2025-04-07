#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343fb0);
CLANG_FORWARD_PROC_SYMBOL(public_6344070);
CLANG_FORWARD_PROC_SYMBOL(public_63440d0);
CLANG_FORWARD_PROC_SYMBOL(public_6355380);
CLANG_FORWARD_PROC_SYMBOL(public_6368560);
CLANG_FORWARD_PROC_SYMBOL(public_6368970);
CLANG_FORWARD_PROC_SYMBOL(public_6368a30);
CLANG_FORWARD_PROC_SYMBOL(public_6368d80);
CLANG_FORWARD_PROC_SYMBOL(public_6368e60);
CLANG_FORWARD_PROC_SYMBOL(public_6368f00);
CLANG_FORWARD_PROC_SYMBOL(public_6368f60);
CLANG_FORWARD_JUMP_SYMBOL(public_639858b);

#define public_6368fc7 _public_6368fc7
#define public_6369013 _public_6369013
#define public_6369016 _public_6369016
#define public_636905e _public_636905e

PROC_DECLARE(0x6368f60, internal_6368f60, public_6368f60);
extern "C" NAKED register_t __cdecl internal_6368f60()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_639858b @0x6368f68*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_639858b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x830
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [eax+0xA0]
        inc word ptr ds : [esi+0x10]
        inc dword ptr ds : [public_658ab8c]
        call public_6368e60
        mov ecx, edi
        call public_6368d80
        movsx ecx, word ptr ds : [edi+0x40]
        movsx edx, word ptr ds : [edi+0x3E]
        sub edx, ecx
        cmp edx, 0x96
        jle public_6368fc7
        mov ecx, edi
        call public_6368f00
        dec word ptr ds : [esi+0x10]
        mov ecx, esi
        call public_6344070
        jmp public_636905e
        public_6368fc7 : nop
        mov eax, dword ptr ss : [esp+0x848]
        push ebx
        push eax
        push edi
        lea ecx, ss:[esp+0x14]
        call public_6355380
        push edi
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x848], 0
        call public_6368970
        movsx ecx, word ptr ds : [edi+0x3E]
        mov ebx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+0xC]
        shl ecx, 2
        lea eax, ds:[ebx+ecx+0x1F]
        and eax, 0xFFFFFFE0
        cmp eax, edx
        jb public_6369013
        push ecx
        mov ecx, esi
        call public_63440d0
        mov ebx, eax
        jmp public_6369016
        public_6369013 : nop
        mov dword ptr ds : [esi+8], eax
        public_6369016 : nop
        push ebx
        push edi
        lea ecx, ss:[esp+0x14]
        call public_6368a30
        push esi
        push eax
        push ebx
        push edi
        lea ecx, ss:[esp+0x1C]
        call public_6368560
        dec word ptr ds : [esi+0x10]
        mov ecx, esi
        call public_6344070
        mov eax, dword ptr ss : [esp+0x34]
        lea ecx, ss:[esp+0x38]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x844], 0xFFFFFFFF
        pop ebx
        je public_636905e
        test eax, eax
        je public_636905e
        push eax
        call public_6343fb0
        add esp, 4
        public_636905e : nop
        mov ecx, dword ptr ss : [esp+0x838]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x83C
        ret 4
        UNREACHABLE_TRAP(0x6368f60)
    }
}

#undef public_6368fc7
#undef public_6369013
#undef public_6369016
#undef public_636905e
