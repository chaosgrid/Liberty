#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb35b0);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6fa0050);
CLANG_FORWARD_PROC_SYMBOL(public_6fa0440);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3430);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3db0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa4600);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb1f8e);

#define public_6fa008b _public_6fa008b
#define public_6fa00a1 _public_6fa00a1
#define public_6fa00a9 _public_6fa00a9
#define public_6fa00d0 _public_6fa00d0
#define public_6fa00e8 _public_6fa00e8
#define public_6fa0102 _public_6fa0102
#define public_6fa0104 _public_6fa0104
#define public_6fa01c9 _public_6fa01c9
#define public_6fa0241 _public_6fa0241
#define public_6fa0247 _public_6fa0247

PROC_DECLARE(0x6fa0050, internal_6fa0050, public_6fa0050);
extern "C" NAKED register_t __cdecl internal_6fa0050()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb1f8e @0x6fa0052*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb1f8e
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [esi+4]
        push edi
        mov edi, ecx
        mov dword ptr ds : [edi+4], eax
        mov cl, byte ptr ds : [esi+8]
        mov byte ptr ds : [edi+8], cl
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        mov dword ptr ss : [esp+0x10], edi
        jne public_6fa008b
        xor edx, edx
        jmp public_6fa00a1
        public_6fa008b : nop
        mov ecx, dword ptr ds : [esi+0x10]
        sub ecx, eax
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 2
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6fa00a1 : nop
        test edx, edx
        mov eax, edx
        jge public_6fa00a9
        xor eax, eax
        public_6fa00a9 : nop
        lea ecx, ds:[eax+eax*2]
        shl ecx, 3
        push ecx
        call public_6fa912a
        mov dword ptr ds : [edi+0xC], eax
        mov ecx, dword ptr ds : [esi+0x10]
        mov ebp, dword ptr ds : [esi+0xC]
        add esp, 4
        cmp ebp, ecx
        mov dword ptr ss : [esp+0x24], ecx
        mov ebx, eax
        je public_6fa00e8
        nop 
        lea esp, ss:[esp]
        public_6fa00d0 : nop
        push ebp
        push ebx
        call public_6fa4600
        mov eax, dword ptr ss : [esp+0x2C]
        add ebp, 0x18
        add esp, 8
        add ebx, 0x18
        cmp ebp, eax
        jne public_6fa00d0
        public_6fa00e8 : nop
        mov dword ptr ds : [edi+0x10], ebx
        mov dword ptr ds : [edi+0x14], ebx
        lea eax, ds:[esi+0x18]
        test eax, eax
        mov dword ptr ss : [esp+0x1C], 0
        je public_6fa0102
        add eax, 4
        jmp public_6fa0104
        public_6fa0102 : nop
        xor eax, eax
        public_6fa0104 : nop
        lea ecx, ds:[edi+0x1C]
        push eax
        call public_6fa0440
        mov dword ptr ds : [edi+0x18], offset public_6fbd510
        mov ebp, dword ptr ds : [public_6fb3084]
        lea ebx, ds:[edi+0x30]
        lea edx, ds:[esi+0x34]
        push edx
        lea ecx, ds:[ebx+4]
        mov byte ptr ss : [esp+0x20], 1
        mov dword ptr ss : [esp+0x28], ebx
        call ebp
        mov eax, dword ptr ds : [esi+0x4C]
        lea ecx, ds:[esi+0x50]
        push ecx
        lea ecx, ds:[ebx+0x20]
        mov byte ptr ss : [esp+0x20], 2
        mov dword ptr ds : [ebx+0x1C], eax
        call public_6eb35b0
        mov dword ptr ds : [ebx], offset public_6fbc700
        lea ebx, ds:[edi+0x60]
        lea edx, ds:[esi+0x64]
        push edx
        lea ecx, ds:[ebx+4]
        mov byte ptr ss : [esp+0x20], 3
        mov dword ptr ss : [esp+0x28], ebx
        call ebp
        mov eax, dword ptr ds : [esi+0x7C]
        lea ecx, ds:[esi+0x80]
        push ecx
        lea ecx, ds:[ebx+0x20]
        mov byte ptr ss : [esp+0x20], 4
        mov dword ptr ds : [ebx+0x1C], eax
        call public_6eb35b0
        mov dword ptr ds : [ebx], offset public_6fbc700
        mov edx, dword ptr ds : [esi+0x94]
        mov dword ptr ds : [edi+0x94], edx
        mov eax, dword ptr ds : [esi+0x98]
        mov dword ptr ds : [edi+0x98], eax
        mov dword ptr ds : [edi+0x90], offset public_6fbd3f0
        mov cl, byte ptr ds : [esi+0x9C]
        lea ebp, ds:[esi+0x9C]
        lea ebx, ds:[edi+0x9C]
        mov byte ptr ds : [ebx], cl
        mov ecx, ebp
        mov byte ptr ss : [esp+0x1C], 6
        call public_6fa3db0
        test eax, eax
        jge public_6fa01c9
        xor eax, eax
        public_6fa01c9 : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6fa912a
        add esp, 4
        mov dword ptr ds : [ebx+4], eax
        mov ecx, dword ptr ss : [ebp+8]
        mov ebp, dword ptr ss : [ebp+4]
        push eax
        push ecx
        push ebp
        mov ecx, ebx
        call public_6eed270
        mov dword ptr ds : [ebx+8], eax
        mov dword ptr ds : [ebx+0xC], eax
        lea eax, ds:[esi+0xAC]
        lea ecx, ds:[edi+0xAC]
        push eax
        mov byte ptr ss : [esp+0x20], 7
        call public_6eb35b0
        mov cl, byte ptr ds : [esi+0xBC]
        lea ebx, ds:[edi+0xBC]
        mov byte ptr ds : [ebx], cl
        mov eax, dword ptr ds : [esi+0xC0]
        test eax, eax
        mov byte ptr ss : [esp+0x1C], 8
        je public_6fa0241
        mov ecx, dword ptr ds : [esi+0xC4]
        sub ecx, eax
        mov eax, 0x38E38E39
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov eax, edx
        public_6fa0241 : nop
        test eax, eax
        jge public_6fa0247
        xor eax, eax
        public_6fa0247 : nop
        lea ecx, ds:[eax+eax*8]
        shl ecx, 2
        push ecx
        call public_6fa912a
        add esp, 4
        mov dword ptr ds : [ebx+4], eax
        mov ecx, dword ptr ds : [esi+0xC4]
        mov edx, dword ptr ds : [esi+0xC0]
        push eax
        push ecx
        push edx
        mov ecx, ebx
        call public_6fa3430
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ebx+8], eax
        mov dword ptr ds : [ebx+0xC], eax
        mov edx, dword ptr ds : [esi+0xCC]
        mov dword ptr ds : [edi+0xCC], edx
        mov dword ptr ds : [edi], offset public_6fbd554
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6fa0050)
    }
}

#undef public_6fa008b
#undef public_6fa00a1
#undef public_6fa00a9
#undef public_6fa00d0
#undef public_6fa00e8
#undef public_6fa0102
#undef public_6fa0104
#undef public_6fa01c9
#undef public_6fa0241
#undef public_6fa0247
