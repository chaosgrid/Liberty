#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f24870);
CLANG_FORWARD_PROC_SYMBOL(public_6f27870);
CLANG_FORWARD_PROC_SYMBOL(public_6f616e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f62f50);
CLANG_FORWARD_PROC_SYMBOL(public_6f65d20);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fafc18);

#define public_6f65d57 _public_6f65d57
#define public_6f65ea6 _public_6f65ea6
#define public_6f65eba _public_6f65eba
#define public_6f65edd _public_6f65edd
#define public_6f65ef0 _public_6f65ef0

PROC_DECLARE(0x6f65d20, internal_6f65d20, public_6f65d20);
extern "C" NAKED register_t __cdecl internal_6f65d20()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fafc18 @0x6f65d22*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fafc18
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x68
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x80]
        cmp dword ptr ds : [esi+4], 2
        mov dword ptr ss : [esp+8], 0
        je public_6f65d57
        mov dword ptr ss : [esp+8], 0x456A6000
        public_6f65d57 : nop
        lea eax, ss:[esp+8]
        push eax
        lea ecx, ss:[esp+0x2C]
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        mov edx, dword ptr ss : [esp+0x94]
        lea eax, ss:[esp+0x18]
        push eax
        mov eax, dword ptr ss : [esp+0x94]
        lea ecx, ss:[esp+0x94]
        push ecx
        push esi
        push edx
        push eax
        call public_6f62f50
        mov eax, dword ptr ss : [esp+0xA4]
        xor ebx, ebx
        add esp, 0x20
        cmp eax, ebx
        je public_6f65ef0
        lea ecx, ss:[esp+0x4C]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        push eax
        call dword ptr ds : [public_6fb3664]
        lea eax, ss:[esp+0x8C]
        push eax
        lea ecx, ss:[esp+0x98]
        push ecx
        add esi, 0x4C
        lea edx, ss:[esp+0x30]
        push esi
        push edx
        mov byte ptr ss : [esp+0x9C], bl
        mov byte ptr ss : [esp+0xA4], 1
        call public_6f616e0
        add esp, 0x1C
        test al, al
        je public_6f65ef0
        mov ecx, dword ptr ss : [esp+0x84]
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [esp+0x8C]
        mov dword ptr ds : [eax+4], ecx
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax], 1
        push ebp
        mov ebp, dword ptr ss : [esp+0x94]
        mov eax, dword ptr ss : [ebp+4]
        mov eax, dword ptr ds : [eax]
        add eax, 0xBC
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        mov eax, dword ptr ss : [ebp+4]
        mov eax, dword ptr ds : [eax]
        push edi
        lea edi, ds:[eax+0x98]
        mov ecx, 9
        lea esi, ss:[esp+0x30]
        rep movsd
        mov dword ptr ss : [esp+0x88], ebx
        lea edx, ss:[esp+0x88]
        push edx
        push 0x14
        mov dword ptr ss : [esp+0x88], ebx
        call public_6f24870
        mov ecx, dword ptr ss : [esp+0x18]
        add esp, 8
        lea eax, ss:[esp+0x14]
        push eax
        push ecx
        mov ecx, dword ptr ss : [esp+0x90]
        lea edx, ss:[esp+0x94]
        push edx
        call public_6f27870
        mov ebp, dword ptr ss : [ebp+4]
        mov edi, dword ptr ss : [ebp]
        mov eax, dword ptr ds : [edi+0x6C]
        mov esi, dword ptr ds : [eax]
        mov ebx, dword ptr ss : [esp+0x88]
        mov ebp, dword ptr ds : [esi+4]
        push 0xC
        call public_6fa912a
        add esp, 4
        test ebp, ebp
        mov dword ptr ds : [eax], esi
        jne public_6f65ea6
        mov ebp, eax
        public_6f65ea6 : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6f65eba
        mov dword ptr ds : [eax], ebx
        public_6f65eba : nop
        inc dword ptr ds : [edi+0x70]
        mov eax, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [eax]
        mov ecx, dword ptr ss : [esp+0x88]
        test ecx, ecx
        pop edi
        mov dword ptr ss : [esp+0x7C], 0xFFFFFFFF
        pop ebp
        je public_6f65edd
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        public_6f65edd : nop
        pop esi
        mov al, 1
        pop ebx
        mov ecx, dword ptr ss : [esp+0x68]
        mov dword ptr fs : [0], ecx
        add esp, 0x74
        ret 
        public_6f65ef0 : nop
        mov ecx, dword ptr ss : [esp+0x70]
        pop esi
        xor al, al
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x74
        ret 
        UNREACHABLE_TRAP(0x6f65d20)
    }
}

#undef public_6f65d57
#undef public_6f65ea6
#undef public_6f65eba
#undef public_6f65edd
#undef public_6f65ef0
