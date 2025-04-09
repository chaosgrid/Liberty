#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_413df0);
CLANG_FORWARD_PROC_SYMBOL(public_4144f0);
CLANG_FORWARD_PROC_SYMBOL(public_444e20);
CLANG_FORWARD_PROC_SYMBOL(public_445d70);
CLANG_FORWARD_PROC_SYMBOL(public_5793e0);
CLANG_FORWARD_PROC_SYMBOL(public_58c6e0);
CLANG_FORWARD_PROC_SYMBOL(public_590f30);
CLANG_FORWARD_JUMP_SYMBOL(public_5c46dc);

#define public_58c8e4 _public_58c8e4
#define public_58c8e8 _public_58c8e8
#define public_58c950 _public_58c950
#define public_58c964 _public_58c964
#define public_58c9ac _public_58c9ac

PROC_DECLARE(0x58c6e0, internal_58c6e0, public_58c6e0);
extern "C" NAKED register_t __cdecl internal_58c6e0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c46dc @0x58c6e2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c46dc
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x1C], esi
        call public_5793e0
        mov cl, byte ptr ss : [esp+0x13]
        xor eax, eax
        mov dword ptr ss : [esp+0x2C], eax
        mov byte ptr ds : [esi+0x490], cl
        mov dword ptr ds : [esi+0x494], eax
        mov dword ptr ds : [esi+0x498], eax
        mov dword ptr ds : [esi+0x49C], eax
        mov dl, byte ptr ss : [esp+0x13]
        mov byte ptr ds : [esi+0x4A0], dl
        mov dword ptr ds : [esi+0x4A4], eax
        mov dword ptr ds : [esi+0x4A8], eax
        mov dword ptr ds : [esi+0x4AC], eax
        mov cl, byte ptr ss : [esp+0x13]
        mov byte ptr ds : [esi+0x4B0], cl
        mov dword ptr ds : [esi+0x4B4], eax
        mov dword ptr ds : [esi+0x4B8], eax
        mov dword ptr ds : [esi+0x4BC], eax
        mov dl, byte ptr ss : [esp+0x13]
        mov byte ptr ds : [esi+0x4C0], dl
        mov dword ptr ds : [esi+0x4C4], eax
        mov dword ptr ds : [esi+0x4C8], eax
        mov dword ptr ds : [esi+0x4CC], eax
        mov ecx, 0x3F800000
        mov dword ptr ds : [esi+0x524], ecx
        mov dword ptr ds : [esi+0x514], ecx
        mov dword ptr ds : [esi+0x504], ecx
        mov cl, byte ptr ss : [esp+0x13]
        mov dword ptr ds : [esi+0x520], eax
        mov dword ptr ds : [esi+0x51C], eax
        mov dword ptr ds : [esi+0x518], eax
        mov dword ptr ds : [esi+0x510], eax
        mov dword ptr ds : [esi+0x50C], eax
        mov dword ptr ds : [esi+0x508], eax
        mov dword ptr ds : [esi+0x530], eax
        mov dword ptr ds : [esi+0x52C], eax
        mov dword ptr ds : [esi+0x528], eax
        mov byte ptr ds : [esi+0x560], cl
        mov dword ptr ds : [esi+0x564], eax
        mov dword ptr ds : [esi+0x568], eax
        mov dword ptr ds : [esi+0x56C], eax
        or edx, 0xFFFFFFFF
        mov cl, 1
        mov dword ptr ds : [esi], offset public_5e511c
        mov dword ptr ds : [esi+0x7C], offset public_5e5110
        mov dword ptr ds : [esi+0x488], eax
        mov dword ptr ds : [esi+0x48C], eax
        mov byte ptr ds : [esi+0x4D8], al
        mov dword ptr ds : [esi+0x4DC], eax
        mov byte ptr ds : [esi+0x4E8], al
        mov dword ptr ds : [esi+0x4EC], eax
        mov dword ptr ds : [esi+0x4FC], 0x3B83126F
        mov byte ptr ds : [esi+0x500], cl
        mov byte ptr ds : [esi+0x501], cl
        mov dword ptr ds : [esi+0x4E0], edx
        mov dword ptr ds : [esi+0x4E4], edx
        mov edx, dword ptr ds : [public_615550]
        mov dword ptr ds : [esi+0x4F0], edx
        mov edx, dword ptr ds : [public_615558]
        mov dword ptr ds : [esi+0x4F8], edx
        mov edx, dword ptr ds : [public_615554]
        mov byte ptr ss : [esp+0x2C], 5
        mov dword ptr ds : [esi+0x4F4], edx
        mov byte ptr ds : [esi+0x540], al
        mov byte ptr ds : [esi+0x541], al
        mov byte ptr ds : [esi+0x542], al
        mov dword ptr ds : [esi+0x544], eax
        mov dword ptr ds : [esi+0x548], eax
        mov byte ptr ds : [esi+0x54C], al
        mov byte ptr ds : [esi+0x54D], cl
        mov byte ptr ds : [esi+0x54E], cl
        mov byte ptr ds : [esi+0x54F], cl
        mov byte ptr ds : [esi+0x550], cl
        mov byte ptr ds : [esi+0x551], cl
        mov byte ptr ds : [esi+0x552], cl
        mov byte ptr ds : [esi+0x553], cl
        mov byte ptr ds : [esi+0x554], cl
        mov dword ptr ds : [esi+0x558], eax
        mov dword ptr ds : [esi+0x55C], eax
        mov ebx, dword ptr ds : [esi+0x568]
        cmp ebx, ebx
        mov edi, dword ptr ds : [esi+0x564]
        je public_58c950
        mov eax, ebx
        sub eax, edi
        lea ebp, ds:[ebx+0x10]
        mov dword ptr ss : [esp+0x14], eax
        jmp public_58c8e8
        public_58c8e4 : nop
        mov eax, dword ptr ss : [esp+0x14]
        public_58c8e8 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr ds : [edi], ecx
        mov edx, dword ptr ds : [eax+edi+4]
        mov dword ptr ds : [edi+4], edx
        mov eax, dword ptr ss : [ebp-8]
        push 0xFFFFFFFF
        push eax
        lea ecx, ds:[edi+8]
        call public_413df0
        push ebp
        lea ecx, ds:[edi+0x10]
        call public_590f30
        mov ecx, dword ptr ss : [ebp+0x34]
        mov dword ptr ds : [edi+0x44], ecx
        lea edx, ss:[ebp+0x38]
        mov ecx, dword ptr ds : [edx]
        lea eax, ds:[edi+0x48]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], edx
        lea eax, ss:[ebp+0x44]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[edi+0x54]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov cl, byte ptr ss : [ebp+0x50]
        add ebp, 0x64
        mov byte ptr ds : [edi+0x60], cl
        lea edx, ss:[ebp-0x10]
        add edi, 0x64
        cmp edx, ebx
        jne public_58c8e4
        public_58c950 : nop
        mov eax, dword ptr ds : [esi+0x568]
        cmp edi, eax
        mov ebp, edi
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x14], ebp
        je public_58c9ac
        public_58c964 : nop
        lea ebx, ss:[ebp+0x10]
        mov dword ptr ss : [esp+0x20], ebx
        mov ecx, ebx
        mov byte ptr ss : [esp+0x2C], 8
        call public_4144f0
        lea ecx, ds:[ebx+0xC]
        mov byte ptr ss : [esp+0x2C], 7
        call public_445d70
        mov ecx, ebx
        mov byte ptr ss : [esp+0x2C], 6
        call public_444e20
        lea ecx, ss:[ebp+8]
        mov byte ptr ss : [esp+0x2C], 5
        call public_444e20
        mov eax, dword ptr ss : [esp+0x18]
        add ebp, 0x64
        cmp ebp, eax
        mov dword ptr ss : [esp+0x14], ebp
        jne public_58c964
        public_58c9ac : nop
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [esi+0x568], edi
        mov eax, 2
        mov dword ptr ds : [esi+0x574], eax
        mov dword ptr ds : [esi+0x570], eax
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x58c6e0)
    }
}

#undef public_58c8e4
#undef public_58c8e8
#undef public_58c950
#undef public_58c964
#undef public_58c9ac
