#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4029a0);
CLANG_FORWARD_PROC_SYMBOL(public_40f110);
CLANG_FORWARD_PROC_SYMBOL(public_43c010);
CLANG_FORWARD_PROC_SYMBOL(public_575e00);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5c3abb);

#define public_575e93 _public_575e93
#define public_575e95 _public_575e95
#define public_575ea5 _public_575ea5
#define public_575ec7 _public_575ec7
#define public_575ed7 _public_575ed7
#define public_575eda _public_575eda
#define public_575ede _public_575ede
#define public_575eec _public_575eec
#define public_575f06 _public_575f06
#define public_575f0f _public_575f0f
#define public_575f20 _public_575f20
#define public_575f28 _public_575f28
#define public_575f2f _public_575f2f

PROC_DECLARE(0x575e00, internal_575e00, public_575e00);
extern "C" NAKED register_t __cdecl internal_575e00()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5c3abb @0x575e08*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c3abb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebp
        mov ebp, dword ptr ds : [public_67c3a4]
        push esi
        push edi
        xor edi, edi
        cmp ebp, edi
        jne public_575ea5
        push 0x14
        call public_5b7e84
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0xC], esi
        cmp esi, edi
        mov dword ptr ss : [esp+0x24], edi
        je public_575e93
        mov al, byte ptr ss : [esp+0x30]
        mov cl, byte ptr ss : [esp+0x30]
        push 0x18
        mov byte ptr ds : [esi], al
        mov byte ptr ds : [esi+1], cl
        mov byte ptr ds : [esi+0xC], 1
        call public_5b7e84
        mov dword ptr ds : [eax+4], edi
        mov byte ptr ds : [eax+0x14], 1
        mov byte ptr ds : [eax+0x15], 0
        mov dword ptr ds : [esi+8], eax
        mov byte ptr ds : [eax+0x15], 1
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax], edi
        mov edx, dword ptr ds : [esi+8]
        add esp, 4
        mov dword ptr ds : [edx+8], edi
        mov eax, dword ptr ds : [esi+8]
        push edi
        push eax
        mov ecx, esi
        call public_40f110
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        mov dword ptr ds : [esi+0x10], edi
        jmp public_575e95
        public_575e93 : nop
        xor esi, esi
        public_575e95 : nop
        mov ebp, esi
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        mov dword ptr ds : [public_67c3a4], ebp
        public_575ea5 : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        push ebx
        mov ebx, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x1C], ecx
        mov ecx, dword ptr ss : [ebp+4]
        mov esi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ss : [ebp+8]
        cmp esi, edx
        mov edi, ecx
        mov al, 1
        je public_575ede
        public_575ec7 : nop
        cmp ebx, dword ptr ds : [esi+0xC]
        setl al
        test al, al
        mov edi, esi
        je public_575ed7
        mov esi, dword ptr ds : [esi]
        jmp public_575eda
        public_575ed7 : nop
        mov esi, dword ptr ds : [esi+8]
        public_575eda : nop
        cmp esi, edx
        jne public_575ec7
        public_575ede : nop
        mov dl, byte ptr ss : [ebp+0xC]
        test dl, dl
        pop ebx
        je public_575eec
        lea eax, ss:[esp+0x2C]
        jmp public_575f20
        public_575eec : nop
        test al, al
        mov dword ptr ss : [esp+0x30], edi
        je public_575f0f
        cmp edi, dword ptr ds : [ecx]
        jne public_575f06
        lea ecx, ss:[esp+0x14]
        push ecx
        push edi
        push esi
        lea edx, ss:[esp+0x18]
        push edx
        jmp public_575f28
        public_575f06 : nop
        lea ecx, ss:[esp+0x30]
        call public_43c010
        public_575f0f : nop
        mov eax, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ds : [eax+0xC]
        cmp ecx, dword ptr ss : [esp+0x14]
        jge public_575f2f
        lea eax, ss:[esp+0x10]
        public_575f20 : nop
        lea edx, ss:[esp+0x14]
        push edx
        push edi
        push esi
        push eax
        public_575f28 : nop
        mov ecx, ebp
        call public_4029a0
        public_575f2f : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x575e00)
    }
}

#undef public_575e93
#undef public_575e95
#undef public_575ea5
#undef public_575ec7
#undef public_575ed7
#undef public_575eda
#undef public_575ede
#undef public_575eec
#undef public_575f06
#undef public_575f0f
#undef public_575f20
#undef public_575f28
#undef public_575f2f
