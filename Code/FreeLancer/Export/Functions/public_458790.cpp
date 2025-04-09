#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4583a0);
CLANG_FORWARD_PROC_SYMBOL(public_458790);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5ba183);

#define public_458838 _public_458838
#define public_45883a _public_45883a
#define public_458841 _public_458841

PROC_DECLARE(0x458790, internal_458790, public_458790);
extern "C" NAKED register_t __cdecl internal_458790()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5ba183 @0x458798*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5ba183
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ds : [public_66d320]
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        xor ebx, ebx
        cmp eax, ebx
        jne public_458841
        push esi
        push 0x14
        call public_5b7e84
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0xC], esi
        cmp esi, ebx
        mov dword ptr ss : [esp+0x18], ebx
        je public_458838
        mov al, byte ptr ss : [esp+0xB]
        mov cl, byte ptr ss : [esp+0xB]
        push edi
        push 0x24
        mov byte ptr ds : [esi], al
        mov byte ptr ds : [esi+1], cl
        mov byte ptr ds : [esi+0xC], bl
        call public_5b7e84
        mov dword ptr ds : [eax+4], ebx
        mov byte ptr ds : [eax+0x20], 1
        mov byte ptr ds : [eax+0x21], bl
        mov dword ptr ds : [esi+8], eax
        mov byte ptr ds : [eax+0x21], 1
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax], ebx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+8], ebx
        mov edi, dword ptr ds : [esi+8]
        push 0x24
        call public_5b7e84
        mov dword ptr ds : [eax+4], edi
        mov byte ptr ds : [eax+0x20], bl
        mov byte ptr ds : [eax+0x21], bl
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        add esp, 8
        mov dword ptr ds : [esi+0x10], ebx
        mov ecx, esi
        mov byte ptr ss : [esp+0x1C], 1
        call public_4583a0
        pop edi
        jmp public_45883a
        public_458838 : nop
        xor esi, esi
        public_45883a : nop
        mov dword ptr ds : [public_66d320], esi
        pop esi
        public_458841 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x458790)
    }
}

#undef public_458838
#undef public_45883a
#undef public_458841
