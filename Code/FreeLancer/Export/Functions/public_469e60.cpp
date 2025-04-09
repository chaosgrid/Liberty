#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_469e60);
CLANG_FORWARD_PROC_SYMBOL(public_46ba90);
CLANG_FORWARD_PROC_SYMBOL(public_46c8c0);
CLANG_FORWARD_PROC_SYMBOL(public_46cef0);
CLANG_FORWARD_PROC_SYMBOL(public_46d950);
CLANG_FORWARD_PROC_SYMBOL(public_526960);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5bb713);

#define public_469e95 _public_469e95
#define public_469eac _public_469eac
#define public_469ec3 _public_469ec3
#define public_469f78 _public_469f78
#define public_469f80 _public_469f80
#define public_469fa4 _public_469fa4

PROC_DECLARE(0x469e60, internal_469e60, public_469e60);
extern "C" NAKED register_t __cdecl internal_469e60()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bb713 @0x469e62*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bb713
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x10], esi
        mov eax, dword ptr ds : [esi+4]
        mov edi, dword ptr ds : [eax]
        xor ebx, ebx
        cmp edi, eax
        mov dword ptr ss : [esp+0x28], 1
        je public_469ec3
        push ebp
        public_469e95 : nop
        mov ebp, dword ptr ds : [edi+0x10]
        cmp ebp, ebx
        je public_469eac
        mov ecx, ebp
        call public_46ba90
        push ebp
        call public_5b7e1d
        add esp, 4
        public_469eac : nop
        push edi
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        call public_46c8c0
        mov edi, dword ptr ss : [esp+0x10]
        cmp edi, dword ptr ds : [esi+4]
        jne public_469e95
        pop ebp
        public_469ec3 : nop
        mov eax, dword ptr ds : [esi+0x1C]
        mov ecx, dword ptr ds : [eax]
        lea edi, ds:[esi+0x18]
        push eax
        push ecx
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, edi
        call public_46cef0
        mov dword ptr ds : [esi+0x14], ebx
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, edi
        mov byte ptr ss : [esp+0x34], bl
        call public_46cef0
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_5b7e1d
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+0x10], ebx
        call public_5b7e1d
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+0x10]
        mov edi, eax
        mov eax, dword ptr ds : [eax]
        add esp, 8
        cmp ecx, ebx
        mov dword ptr ss : [esp+0x28], 0xFFFFFFFF
        mov dword ptr ss : [esp+0xC], eax
        je public_469f78
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, esi
        call public_53e430
        mov ecx, eax
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, dword ptr ds : [ecx]
        jne public_469f78
        mov ecx, dword ptr ds : [esi+4]
        cmp edi, ecx
        jne public_469f78
        mov ecx, dword ptr ds : [ecx+4]
        push ecx
        mov ecx, esi
        call public_46d950
        mov eax, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+4], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, esi
        mov dword ptr ds : [eax+8], eax
        call public_53e430
        jmp public_469fa4
        public_469f78 : nop
        cmp eax, edi
        je public_469fa4
        lea esp, ss:[esp]
        public_469f80 : nop
        push ebx
        lea edx, ss:[esp+0x1C]
        push edx
        lea ecx, ss:[esp+0x14]
        call public_526960
        mov eax, dword ptr ds : [eax]
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, esi
        call public_46c8c0
        cmp dword ptr ss : [esp+0xC], edi
        jne public_469f80
        public_469fa4 : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+0x10], ebx
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x28]
        add esp, 8
        mov dword ptr ds : [esi+8], ebx
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x469e60)
    }
}

#undef public_469e95
#undef public_469eac
#undef public_469ec3
#undef public_469f78
#undef public_469f80
#undef public_469fa4
