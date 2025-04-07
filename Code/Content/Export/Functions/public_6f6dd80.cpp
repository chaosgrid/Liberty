#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb1810);
CLANG_FORWARD_PROC_SYMBOL(public_6efec10);
CLANG_FORWARD_PROC_SYMBOL(public_6f66220);
CLANG_FORWARD_PROC_SYMBOL(public_6f6dd80);
CLANG_FORWARD_PROC_SYMBOL(public_6f73930);
CLANG_FORWARD_PROC_SYMBOL(public_6f75f30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fafe28);

#define public_6f6de10 _public_6f6de10
#define public_6f6de7b _public_6f6de7b
#define public_6f6dedb _public_6f6dedb

PROC_DECLARE(0x6f6dd80, internal_6f6dd80, public_6f6dd80);
extern "C" NAKED register_t __cdecl internal_6f6dd80()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fafe28 @0x6f6dd82*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fafe28
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x38
        mov al, byte ptr ss : [esp+0x48]
        push ebx
        xor ebx, ebx
        push edi
        mov byte ptr ss : [esp+8], al
        mov dword ptr ss : [esp+0xC], ebx
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ss : [esp+0x14], ebx
        mov ecx, dword ptr ss : [esp+0x50]
        push ecx
        mov dword ptr ss : [esp+0x4C], ebx
        call public_6f75f30
        mov edx, dword ptr ss : [esp+0x58]
        mov ecx, dword ptr ds : [edx]
        add esp, 4
        push ecx
        mov ecx, eax
        call public_6f73930
        mov edx, dword ptr ds : [eax+0x154]
        push edx
        lea eax, ss:[esp+0xC]
        push eax
        call public_6f66220
        mov ecx, dword ptr ss : [esp+0x14]
        add esp, 8
        cmp ecx, ebx
        je public_6f6dedb
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, edx
        sub eax, ecx
        sar eax, 2
        cmp eax, ebx
        je public_6f6dedb
        lea edi, ds:[ecx+4]
        cmp edi, edx
        je public_6f6dedb
        push ebp
        push esi
        nop 
        public_6f6de10 : nop
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        mov byte ptr ss : [esp+0x30], bl
        call public_6efec10
        fstp qword ptr ss : [esp+0x38]
        mov ecx, dword ptr ss : [esp+0x58]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [edi]
        mov esi, dword ptr ds : [public_6fd1bcc]
        mov dword ptr ss : [esp+0x20], edx
        mov edx, dword ptr ss : [esp+0x64]
        mov byte ptr ss : [esp+0x40], bl
        mov ecx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x24], ecx
        mov ecx, dword ptr ss : [esp+0x60]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x2C], eax
        mov dword ptr ss : [esp+0x28], edx
        mov byte ptr ss : [esp+0x30], bl
        mov ebp, dword ptr ds : [esi+4]
        push 0x30
        call public_6fa912a
        add esp, 4
        cmp ebp, ebx
        mov dword ptr ds : [eax], esi
        jne public_6f6de7b
        mov ebp, eax
        public_6f6de7b : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ss:[esp+0x20]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_6eb1810
        mov esi, dword ptr ds : [public_6fd1bd0]
        mov edx, dword ptr ss : [esp+0x6C]
        inc esi
        mov dword ptr ds : [public_6fd1bd0], esi
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx]
        push 4
        mov dword ptr ss : [esp+0x68], ecx
        mov ecx, dword ptr ss : [esp+0x6C]
        push eax
        push ecx
        lea edx, ss:[esp+0x70]
        push edx
        call dword ptr ds : [public_6fb358c]
        mov eax, dword ptr ss : [esp+0x30]
        add edi, 4
        add esp, 0x18
        cmp edi, eax
        jne public_6f6de10
        mov ecx, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        public_6f6dedb : nop
        push ecx
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x44]
        add esp, 4
        pop edi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x44
        ret 
        UNREACHABLE_TRAP(0x6f6dd80)
    }
}

#undef public_6f6de10
#undef public_6f6de7b
#undef public_6f6dedb
