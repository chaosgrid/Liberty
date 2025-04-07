#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eae440);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6f36d80);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e80);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6faed18);

#define public_6f36dd0 _public_6f36dd0
#define public_6f36de1 _public_6f36de1
#define public_6f36dec _public_6f36dec
#define public_6f36dee _public_6f36dee
#define public_6f36e00 _public_6f36e00
#define public_6f36e0b _public_6f36e0b
#define public_6f36e0d _public_6f36e0d
#define public_6f36e31 _public_6f36e31
#define public_6f36e3c _public_6f36e3c
#define public_6f36e3e _public_6f36e3e
#define public_6f36e49 _public_6f36e49
#define public_6f36e69 _public_6f36e69
#define public_6f36e79 _public_6f36e79
#define public_6f36e8b _public_6f36e8b
#define public_6f36e90 _public_6f36e90
#define public_6f36e98 _public_6f36e98

PROC_DECLARE(0x6f36d80, internal_6f36d80, public_6f36d80);
extern "C" NAKED register_t __cdecl internal_6f36d80()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faed18 @0x6f36d82*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faed18
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x1C
        push ebx
        push ebp
        xor edx, edx
        mov dword ptr ss : [esp+8], edx
        mov al, byte ptr ss : [esp+0x38]
        push esi
        push edi
        xor edi, edi
        xor ecx, ecx
        mov byte ptr ss : [esp+0x1C], al
        mov dword ptr ss : [esp+0x20], edi
        mov dword ptr ss : [esp+0x24], ecx
        mov dword ptr ss : [esp+0x28], edx
        mov ebx, dword ptr ss : [esp+0x40]
        mov ebp, dword ptr ds : [ebx+4]
        cmp ebp, dword ptr ds : [ebx+8]
        mov dword ptr ss : [esp+0x34], edx
        je public_6f36e79
        mov edi, edi
        public_6f36dd0 : nop
        mov edx, dword ptr ss : [esp+0x44]
        mov eax, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        cmp eax, edx
        je public_6f36dec
        mov esi, dword ptr ss : [ebp]
        public_6f36de1 : nop
        cmp dword ptr ds : [eax], esi
        je public_6f36dee
        add eax, 4
        cmp eax, edx
        jne public_6f36de1
        public_6f36dec : nop
        mov eax, edx
        public_6f36dee : nop
        cmp eax, edx
        je public_6f36e69
        cmp edi, ecx
        mov eax, edi
        je public_6f36e0b
        mov edx, dword ptr ss : [ebp]
        nop 
        lea esp, ss:[esp]
        public_6f36e00 : nop
        cmp dword ptr ds : [eax], edx
        je public_6f36e0d
        add eax, 4
        cmp eax, ecx
        jne public_6f36e00
        public_6f36e0b : nop
        mov eax, ecx
        public_6f36e0d : nop
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        jne public_6f36e49
        push ebp
        push ecx
        lea ecx, ss:[esp+0x24]
        call public_6eae440
        mov edi, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x24]
        cmp edi, ecx
        mov eax, edi
        je public_6f36e3c
        mov edx, dword ptr ss : [ebp]
        public_6f36e31 : nop
        cmp dword ptr ds : [eax], edx
        je public_6f36e3e
        add eax, 4
        cmp eax, ecx
        jne public_6f36e31
        public_6f36e3c : nop
        mov eax, ecx
        public_6f36e3e : nop
        mov dword ptr ss : [esp+0x14], eax
        mov byte ptr ss : [esp+0x18], 1
        jmp public_6f36e69
        public_6f36e49 : nop
        lea ecx, ss:[esp+0x40]
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        lea ecx, ss:[esp+0x1C]
        mov byte ptr ss : [esp+0x48], 0
        call public_6fa6e80
        mov ecx, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x20]
        public_6f36e69 : nop
        mov eax, dword ptr ds : [ebx+8]
        add ebp, 4
        cmp ebp, eax
        jne public_6f36dd0
        xor edx, edx
        public_6f36e79 : nop
        cmp edi, edx
        mov esi, dword ptr ss : [esp+0x3C]
        mov al, byte ptr ss : [esp+0x1C]
        mov byte ptr ds : [esi], al
        jne public_6f36e8b
        xor ecx, ecx
        jmp public_6f36e90
        public_6f36e8b : nop
        sub ecx, edi
        sar ecx, 2
        public_6f36e90 : nop
        cmp ecx, edx
        mov eax, ecx
        jge public_6f36e98
        xor eax, eax
        public_6f36e98 : nop
        lea ecx, ds:[eax*4]
        push ecx
        call public_6fa912a
        mov edx, dword ptr ss : [esp+0x28]
        add esp, 4
        push eax
        mov dword ptr ds : [esi+4], eax
        mov eax, dword ptr ss : [esp+0x24]
        push edx
        push eax
        mov ecx, esi
        call public_6eed270
        mov ecx, dword ptr ss : [esp+0x20]
        push ecx
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x30]
        add esp, 4
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x28
        ret 
        UNREACHABLE_TRAP(0x6f36d80)
    }
}

#undef public_6f36dd0
#undef public_6f36de1
#undef public_6f36dec
#undef public_6f36dee
#undef public_6f36e00
#undef public_6f36e0b
#undef public_6f36e0d
#undef public_6f36e31
#undef public_6f36e3c
#undef public_6f36e3e
#undef public_6f36e49
#undef public_6f36e69
#undef public_6f36e79
#undef public_6f36e8b
#undef public_6f36e90
#undef public_6f36e98
