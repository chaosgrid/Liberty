#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46c8c0);
CLANG_FORWARD_PROC_SYMBOL(public_524af0);
CLANG_FORWARD_PROC_SYMBOL(public_526960);
CLANG_FORWARD_PROC_SYMBOL(public_527400);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5c012b);

#define public_524b21 _public_524b21
#define public_524b40 _public_524b40
#define public_524b4b _public_524b4b
#define public_524b53 _public_524b53
#define public_524b5d _public_524b5d
#define public_524b64 _public_524b64
#define public_524b68 _public_524b68
#define public_524bb5 _public_524bb5
#define public_524bc0 _public_524bc0
#define public_524be4 _public_524be4
#define public_524c45 _public_524c45
#define public_524c50 _public_524c50
#define public_524c74 _public_524c74

PROC_DECLARE(0x524af0, internal_524af0, public_524af0);
extern "C" NAKED register_t __cdecl internal_524af0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c012b @0x524af2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c012b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        push edi
        mov dword ptr ss : [esp+0x14], ebp
        mov edi, dword ptr ss : [ebp+0x40]
        mov esi, dword ptr ds : [edi]
        xor ebx, ebx
        cmp esi, edi
        mov dword ptr ss : [esp+0x2C], ebx
        je public_524b68
        public_524b21 : nop
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax+0x15C]
        mov eax, dword ptr ds : [esi+8]
        cmp byte ptr ds : [eax+0x15], bl
        jne public_524b4b
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        cmp byte ptr ds : [eax+0x15], bl
        jne public_524b64
        nop 
        public_524b40 : nop
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        cmp byte ptr ds : [eax+0x15], bl
        je public_524b40
        jmp public_524b64
        public_524b4b : nop
        mov eax, dword ptr ds : [esi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_524b5d
        public_524b53 : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax+4]
        cmp esi, dword ptr ds : [eax+8]
        je public_524b53
        public_524b5d : nop
        cmp dword ptr ds : [esi+8], eax
        je public_524b64
        mov esi, eax
        public_524b64 : nop
        cmp esi, edi
        jne public_524b21
        public_524b68 : nop
        mov edi, dword ptr ss : [ebp+0x40]
        mov ecx, dword ptr ss : [ebp+0x4C]
        cmp ecx, ebx
        mov eax, dword ptr ds : [edi]
        lea esi, ss:[ebp+0x3C]
        mov dword ptr ss : [esp+0x10], eax
        je public_524bb5
        mov ecx, eax
        cmp eax, ecx
        jne public_524bb5
        cmp edi, edi
        jne public_524bb5
        mov ecx, dword ptr ds : [edi+4]
        push ecx
        mov ecx, esi
        call public_527400
        mov eax, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+4], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, esi
        mov dword ptr ds : [eax+8], eax
        call public_53e430
        jmp public_524be4
        public_524bb5 : nop
        cmp eax, edi
        je public_524be4
        lea esp, ss:[esp]
        public_524bc0 : nop
        push ebx
        lea edx, ss:[esp+0x20]
        push edx
        lea ecx, ss:[esp+0x18]
        call public_526960
        mov eax, dword ptr ds : [eax]
        push eax
        lea ecx, ss:[esp+0x24]
        push ecx
        mov ecx, esi
        call public_46c8c0
        cmp dword ptr ss : [esp+0x10], edi
        jne public_524bc0
        public_524be4 : nop
        mov edi, dword ptr ds : [esi+4]
        cmp dword ptr ds : [esi+0x10], ebx
        mov ecx, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x10], ecx
        je public_524c45
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, esi
        call public_53e430
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, dword ptr ds : [eax]
        jne public_524c45
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_524c45
        mov eax, dword ptr ds : [eax+4]
        push eax
        mov ecx, esi
        call public_527400
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, esi
        call public_53e430
        jmp public_524c74
        public_524c45 : nop
        cmp ecx, edi
        je public_524c74
        lea esp, ss:[esp]
        public_524c50 : nop
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea ecx, ss:[esp+0x18]
        call public_526960
        mov edx, dword ptr ds : [eax]
        push edx
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        call public_46c8c0
        cmp dword ptr ss : [esp+0x10], edi
        jne public_524c50
        public_524c74 : nop
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_5b7e1d
        mov edx, dword ptr ds : [esi+8]
        push edx
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+0x10], ebx
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x2C]
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebx
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x524af0)
    }
}

#undef public_524b21
#undef public_524b40
#undef public_524b4b
#undef public_524b53
#undef public_524b5d
#undef public_524b64
#undef public_524b68
#undef public_524bb5
#undef public_524bc0
#undef public_524be4
#undef public_524c45
#undef public_524c50
#undef public_524c74
