#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f7e0c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f7f760);
CLANG_FORWARD_PROC_SYMBOL(public_6f7f990);
CLANG_FORWARD_PROC_SYMBOL(public_6f7fea0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb0686);

#define public_6f7f9e0 _public_6f7f9e0
#define public_6f7fa70 _public_6f7fa70
#define public_6f7fa80 _public_6f7fa80
#define public_6f7fa90 _public_6f7fa90
#define public_6f7fada _public_6f7fada
#define public_6f7fb49 _public_6f7fb49
#define public_6f7fb5a _public_6f7fb5a
#define public_6f7fb7f _public_6f7fb7f

PROC_DECLARE(0x6f7f990, internal_6f7f990, public_6f7f990);
extern "C" NAKED register_t __cdecl internal_6f7f990()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6fb0686 @0x6f7f998*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb0686
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x7C
        push ebx
        mov ebx, dword ptr ss : [esp+0x94]
        push ebp
        mov ebp, dword ptr ss : [esp+0x94]
        mov ecx, ebx
        sub ecx, ebp
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        push esi
        mov esi, edx
        cmp esi, 0x10
        push edi
        jle public_6f7fb7f
        lea esp, ss:[esp]
        public_6f7f9e0 : nop
        mov ecx, dword ptr ss : [esp+0xA4]
        push ecx
        sub esp, 0x38
        lea edx, ds:[ebx-0x38]
        mov ecx, esp
        mov dword ptr ss : [esp+0x4C], esp
        push edx
        call public_6f7f760
        mov eax, esi
        cdq 
        sub eax, edx
        sar eax, 1
        imul eax, 0x38
        sub esp, 0x38
        add eax, ebp
        mov ecx, esp
        mov dword ptr ss : [esp+0x88], esp
        push eax
        mov dword ptr ss : [esp+0x10C], 0
        call public_6f7f760
        sub esp, 0x38
        mov ecx, esp
        mov dword ptr ss : [esp+0xC4], esp
        push ebp
        mov byte ptr ss : [esp+0x144], 1
        call public_6f7f760
        lea eax, ss:[esp+0xC8]
        push eax
        mov dword ptr ss : [esp+0x144], 0xFFFFFFFF
        call public_6f7fea0
        add esp, 0xB0
        mov edi, ebx
        mov esi, ebp
        mov dword ptr ss : [esp+0x94], 2
        lea ebx, ds:[ebx]
        public_6f7fa70 : nop
        mov eax, dword ptr ss : [esp+0x20]
        cmp dword ptr ds : [esi+4], eax
        jae public_6f7fa90
        lea esp, ss:[esp]
        public_6f7fa80 : nop
        mov ecx, dword ptr ds : [esi+0x3C]
        add esi, 0x38
        cmp ecx, eax
        jb public_6f7fa80
        lea ebx, ds:[ebx]
        public_6f7fa90 : nop
        mov ecx, dword ptr ds : [edi-0x34]
        sub edi, 0x38
        cmp eax, ecx
        jb public_6f7fa90
        cmp edi, esi
        jbe public_6f7fada
        push esi
        lea ecx, ss:[esp+0x58]
        call public_6f7f760
        push edi
        mov ecx, esi
        mov byte ptr ss : [esp+0x98], 3
        call public_6f7e0c0
        lea ecx, ss:[esp+0x54]
        push ecx
        mov ecx, edi
        call public_6f7e0c0
        lea ecx, ss:[esp+0x5C]
        mov byte ptr ss : [esp+0x94], 2
        call public_6eec8d0
        add esi, 0x38
        jmp public_6f7fa70
        public_6f7fada : nop
        mov edx, dword ptr ss : [esp+0x28]
        push edx
        mov dword ptr ss : [esp+0x98], 0xFFFFFFFF
        call public_6fa8fe0
        xor eax, eax
        mov dword ptr ss : [esp+0x2C], eax
        mov dword ptr ss : [esp+0x30], eax
        mov dword ptr ss : [esp+0x34], eax
        mov edi, ebx
        sub edi, esi
        mov eax, 0x92492493
        imul edi
        mov ecx, edx
        add ecx, edi
        sar ecx, 5
        mov eax, ecx
        shr eax, 0x1F
        add ecx, eax
        mov edi, esi
        sub edi, ebp
        mov eax, 0x92492493
        imul edi
        add edx, edi
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add esp, 4
        add edx, eax
        cmp ecx, edx
        push 0
        jg public_6f7fb49
        mov ecx, dword ptr ss : [esp+0xA8]
        push ecx
        push ebx
        push esi
        call public_6f7f990
        mov ebx, esi
        jmp public_6f7fb5a
        public_6f7fb49 : nop
        mov edx, dword ptr ss : [esp+0xA8]
        push edx
        push esi
        push ebp
        call public_6f7f990
        mov ebp, esi
        public_6f7fb5a : nop
        mov ecx, ebx
        sub ecx, ebp
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov esi, edx
        add esp, 0x10
        cmp esi, 0x10
        jg public_6f7f9e0
        public_6f7fb7f : nop
        mov ecx, dword ptr ss : [esp+0x8C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0x88
        ret 
        UNREACHABLE_TRAP(0x6f7f990)
    }
}

#undef public_6f7f9e0
#undef public_6f7fa70
#undef public_6f7fa80
#undef public_6f7fa90
#undef public_6f7fada
#undef public_6f7fb49
#undef public_6f7fb5a
#undef public_6f7fb7f
