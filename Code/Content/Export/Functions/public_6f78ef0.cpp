#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6eae300);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef6750);
CLANG_FORWARD_PROC_SYMBOL(public_6ef6bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef7860);
CLANG_FORWARD_PROC_SYMBOL(public_6efa720);
CLANG_FORWARD_PROC_SYMBOL(public_6efa740);
CLANG_FORWARD_PROC_SYMBOL(public_6efae10);
CLANG_FORWARD_PROC_SYMBOL(public_6f78ef0);
CLANG_FORWARD_PROC_SYMBOL(public_6f79100);
CLANG_FORWARD_PROC_SYMBOL(public_6f79980);
CLANG_FORWARD_PROC_SYMBOL(public_6f7ace0);
CLANG_FORWARD_PROC_SYMBOL(public_6f7c010);
CLANG_FORWARD_PROC_SYMBOL(public_6f7c1f0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb04c0);

#define public_6f78f78 _public_6f78f78
#define public_6f78f8e _public_6f78f8e
#define public_6f78fa0 _public_6f78fa0
#define public_6f78fd9 _public_6f78fd9
#define public_6f79017 _public_6f79017
#define public_6f7903e _public_6f7903e
#define public_6f79090 _public_6f79090
#define public_6f790a6 _public_6f790a6

PROC_DECLARE(0x6f78ef0, internal_6f78ef0, public_6f78ef0);
extern "C" NAKED register_t __cdecl internal_6f78ef0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb04c0 @0x6f78ef2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb04c0
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x68
        mov ecx, dword ptr ds : [ecx+0x120]
        push ebx
        push ebp
        push esi
        push edi
        lea eax, ss:[esp+0x88]
        push eax
        lea edx, ss:[esp+0x30]
        push edx
        call public_6f79100
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        mov ebp, dword ptr ss : [esp+0x8C]
        mov dword ptr ss : [ebp], eax
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ss : [ebp+4], ecx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ss : [ebp+8], edx
        mov eax, dword ptr ds : [esi+0xC]
        mov dword ptr ss : [ebp+0xC], eax
        mov ecx, dword ptr ds : [esi+0x10]
        mov dword ptr ss : [ebp+0x10], ecx
        mov edx, dword ptr ds : [esi+0x14]
        lea edi, ss:[ebp+0x18]
        mov dword ptr ss : [ebp+0x14], edx
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [edi+4]
        push eax
        push ecx
        mov ecx, edi
        mov dword ptr ss : [esp+0x88], 0
        call public_6f7c1f0
        mov eax, dword ptr ds : [esi+0x1C]
        test eax, eax
        jne public_6f78f78
        xor edx, edx
        jmp public_6f78f8e
        public_6f78f78 : nop
        mov ecx, dword ptr ds : [esi+0x20]
        sub ecx, eax
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6f78f8e : nop
        push edx
        mov ecx, edi
        call public_6f7ace0
        mov ebx, dword ptr ds : [esi+0x1C]
        cmp ebx, dword ptr ds : [esi+0x20]
        je public_6f78fd9
        mov edi, edi
        public_6f78fa0 : nop
        push ebx
        lea ecx, ss:[esp+0x1C]
        call public_6efa740
        mov ecx, dword ptr ds : [edi+8]
        push eax
        push ecx
        mov ecx, edi
        mov byte ptr ss : [esp+0x88], 1
        call public_6f7c010
        lea ecx, ss:[esp+0x18]
        mov byte ptr ss : [esp+0x80], 0
        call public_6eec8d0
        mov eax, dword ptr ds : [esi+0x20]
        add ebx, 0x14
        cmp ebx, eax
        jne public_6f78fa0
        public_6f78fd9 : nop
        mov ecx, dword ptr ds : [esi+0x28]
        lea edx, ds:[esi+0x2C]
        mov dword ptr ss : [ebp+0x28], ecx
        push edx
        lea ecx, ss:[ebp+0x2C]
        call public_6f79980
        mov eax, dword ptr ss : [ebp+0x44]
        mov ecx, dword ptr ss : [ebp+0x40]
        lea edi, ss:[ebp+0x3C]
        push eax
        push ecx
        mov ecx, edi
        lea ebx, ds:[esi+0x3C]
        call public_6ef6750
        mov ecx, ebx
        call public_6eae300
        push eax
        mov ecx, edi
        call public_6ef7860
        mov esi, dword ptr ds : [ebx+4]
        cmp esi, dword ptr ds : [ebx+8]
        je public_6f7903e
        public_6f79017 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        lea edx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [edi+8]
        push edx
        mov dword ptr ss : [esp+0x18], ecx
        push eax
        mov ecx, edi
        call public_6ef6bb0
        mov eax, dword ptr ds : [ebx+8]
        add esi, 8
        cmp esi, eax
        jne public_6f79017
        public_6f7903e : nop
        mov eax, dword ptr ss : [esp+0x70]
        mov ecx, dword ptr ss : [esp+0x6C]
        push eax
        push ecx
        lea ecx, ss:[esp+0x70]
        mov dword ptr ss : [esp+0x88], 3
        call public_6ea1490
        mov edx, dword ptr ss : [esp+0x6C]
        push edx
        call public_6fa8fe0
        mov edi, dword ptr ss : [esp+0x64]
        mov esi, dword ptr ss : [esp+0x60]
        xor ebx, ebx
        add esp, 4
        cmp esi, edi
        mov dword ptr ss : [esp+0x6C], ebx
        mov dword ptr ss : [esp+0x70], ebx
        mov dword ptr ss : [esp+0x74], ebx
        mov byte ptr ss : [esp+0x80], 2
        je public_6f790a6
        nop 
        lea esp, ss:[esp]
        public_6f79090 : nop
        push ebx
        mov ecx, esi
        call public_6efa720
        add esi, 0x80
        cmp esi, edi
        jne public_6f79090
        mov esi, dword ptr ss : [esp+0x5C]
        public_6f790a6 : nop
        push esi
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x50]
        mov ecx, dword ptr ss : [esp+0x4C]
        add esp, 4
        push eax
        push ecx
        lea ecx, ss:[esp+0x4C]
        mov dword ptr ss : [esp+0x64], ebx
        mov dword ptr ss : [esp+0x68], ebx
        mov dword ptr ss : [esp+0x6C], ebx
        mov dword ptr ss : [esp+0x88], 0xFFFFFFFF
        call public_6efae10
        mov edx, dword ptr ss : [esp+0x48]
        push edx
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x7C]
        add esp, 4
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x74
        ret 8
        UNREACHABLE_TRAP(0x6f78ef0)
    }
}

#undef public_6f78f78
#undef public_6f78f8e
#undef public_6f78fa0
#undef public_6f78fd9
#undef public_6f79017
#undef public_6f7903e
#undef public_6f79090
#undef public_6f790a6
