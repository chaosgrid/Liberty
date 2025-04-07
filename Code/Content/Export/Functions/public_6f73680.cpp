#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecfec0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f68e30);
CLANG_FORWARD_PROC_SYMBOL(public_6f73680);
CLANG_FORWARD_PROC_SYMBOL(public_6f93490);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb00ab);

#define public_6f736b2 _public_6f736b2
#define public_6f736fb _public_6f736fb
#define public_6f73703 _public_6f73703
#define public_6f73709 _public_6f73709
#define public_6f73726 _public_6f73726
#define public_6f7372e _public_6f7372e
#define public_6f73738 _public_6f73738
#define public_6f73780 _public_6f73780
#define public_6f737a0 _public_6f737a0
#define public_6f737c8 _public_6f737c8
#define public_6f737e0 _public_6f737e0

PROC_DECLARE(0x6f73680, internal_6f73680, public_6f73680);
extern "C" NAKED register_t __cdecl internal_6f73680()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb00ab @0x6f73682*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb00ab
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x28]
        mov ebx, ecx
        mov ecx, dword ptr ss : [ebp]
        test ecx, ecx
        push esi
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ds : [ebx], ecx
        je public_6f736b2
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax]
        public_6f736b2 : nop
        mov ecx, dword ptr ss : [ebp+4]
        mov dword ptr ds : [ebx+4], ecx
        push edi
        lea esi, ss:[ebp+8]
        lea edi, ds:[ebx+8]
        mov ecx, 0xD
        rep movsd
        mov edx, dword ptr ss : [ebp+0x3C]
        mov dword ptr ds : [ebx+0x3C], edx
        mov eax, dword ptr ss : [ebp+0x40]
        mov dword ptr ds : [ebx+0x40], eax
        mov ecx, dword ptr ss : [ebp+0x44]
        mov dword ptr ds : [ebx+0x44], ecx
        mov edx, dword ptr ss : [ebp+0x48]
        mov dword ptr ds : [ebx+0x48], edx
        mov eax, dword ptr ss : [ebp+0x4C]
        mov dword ptr ds : [ebx+0x4C], eax
        mov cl, byte ptr ss : [ebp+0x50]
        xor edi, edi
        mov byte ptr ds : [ebx+0x50], cl
        mov ecx, dword ptr ss : [ebp+0x54]
        cmp ecx, edi
        mov dword ptr ss : [esp+0x28], edi
        jne public_6f736fb
        xor eax, eax
        jmp public_6f73703
        public_6f736fb : nop
        mov eax, dword ptr ss : [ebp+0x58]
        sub eax, ecx
        sar eax, 2
        public_6f73703 : nop
        cmp eax, edi
        jge public_6f73709
        xor eax, eax
        public_6f73709 : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6fa912a
        mov dword ptr ds : [ebx+0x54], eax
        mov edx, dword ptr ss : [ebp+0x58]
        mov ecx, dword ptr ss : [ebp+0x54]
        add esp, 4
        cmp ecx, edx
        je public_6f73738
        public_6f73726 : nop
        cmp eax, edi
        je public_6f7372e
        mov esi, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], esi
        public_6f7372e : nop
        add ecx, 4
        add eax, 4
        cmp ecx, edx
        jne public_6f73726
        public_6f73738 : nop
        mov dword ptr ds : [ebx+0x58], eax
        mov dword ptr ds : [ebx+0x5C], eax
        mov al, byte ptr ss : [esp+0x30]
        lea esi, ds:[ebx+0x60]
        push 0xC
        mov byte ptr ss : [esp+0x2C], 1
        mov dword ptr ss : [esp+0x1C], esi
        mov byte ptr ds : [esi], al
        call public_6fa912a
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], edi
        lea ecx, ss:[esp+0x30]
        push ecx
        mov ecx, esi
        mov byte ptr ss : [esp+0x2C], 2
        call public_6f1df30
        mov eax, dword ptr ss : [esp+0x30]
        cmp eax, dword ptr ds : [esi+4]
        je public_6f737a0
        nop 
        public_6f73780 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        push edi
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x38]
        call public_6f68e30
        mov eax, dword ptr ss : [esp+0x30]
        cmp eax, dword ptr ds : [esi+4]
        jne public_6f73780
        public_6f737a0 : nop
        mov ecx, esi
        call public_6ecfec0
        lea ecx, ss:[ebp+0x60]
        push ecx
        mov ecx, esi
        call public_6f93490
        lea edx, ss:[esp+0x10]
        push edx
        mov ecx, esi
        call public_6f1df30
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [esi+4]
        pop edi
        je public_6f737e0
        public_6f737c8 : nop
        mov eax, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx]
        mov eax, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0xC], eax
        jne public_6f737c8
        public_6f737e0 : nop
        mov ecx, dword ptr ss : [ebp+0x6C]
        mov dword ptr ds : [ebx+0x6C], ecx
        mov edx, dword ptr ss : [ebp+0x70]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ebx+0x70], edx
        mov eax, dword ptr ss : [ebp+0x74]
        pop esi
        mov dword ptr ds : [ebx+0x74], eax
        pop ebp
        mov eax, ebx
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 4
        UNREACHABLE_TRAP(0x6f73680)
    }
}

#undef public_6f736b2
#undef public_6f736fb
#undef public_6f73703
#undef public_6f73709
#undef public_6f73726
#undef public_6f7372e
#undef public_6f73738
#undef public_6f73780
#undef public_6f737a0
#undef public_6f737c8
#undef public_6f737e0
