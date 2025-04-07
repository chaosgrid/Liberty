#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d3e580);
CLANG_FORWARD_PROC_SYMBOL(public_6d41b00);

#define public_6d2eefa _public_6d2eefa
#define public_6d2ef16 _public_6d2ef16
#define public_6d2ef56 _public_6d2ef56
#define public_6d2ef71 _public_6d2ef71
#define public_6d2efb0 _public_6d2efb0
#define public_6d2efc6 _public_6d2efc6
#define public_6d2efcb _public_6d2efcb
#define public_6d2efcf _public_6d2efcf
#define public_6d2eff2 _public_6d2eff2
#define public_6d2f00d _public_6d2f00d
#define public_6d2f00f _public_6d2f00f
#define public_6d2f013 _public_6d2f013
#define public_6d2f01c _public_6d2f01c
#define public_6d2f03e _public_6d2f03e
#define public_6d2f043 _public_6d2f043
#define public_6d2f05e _public_6d2f05e

PROC_DECLARE(0x6d2eec0, internal_6d2eec0, public_6d2eec0);
extern "C" NAKED register_t __cdecl internal_6d2eec0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [eax]
        sub esp, 0x24
        push ebx
        mov bx, word ptr ds : [edx]
        test bx, bx
        je public_6d2f05e
        cmp bx, 0xFF
        push ebp
        push esi
        push edi
        mov edi, dword ptr ds : [ecx+8]
        ja public_6d2efcf
        xor eax, eax
        mov al, bl
        mov ecx, eax
        and ecx, 0x8000001F
        jns public_6d2eefa
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d2eefa : nop
        shr eax, 5
        mov edx, 1
        shl edx, cl
        test dword ptr ds : [edi+eax*4+8], edx
        setne al
        movzx eax, al
        test eax, eax
        jne public_6d2f03e
        public_6d2ef16 : nop
        mov al, byte ptr ds : [edi+5]
        test al, al
        mov dword ptr ss : [esp+0x10], ebx
        jne public_6d2efcb
        mov eax, dword ptr ds : [public_6d64bb0]
        lea ecx, ss:[esp+0x10]
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x1C], eax
        call public_6d41b00
        mov ebx, dword ptr ds : [edi+0x40]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        mov eax, dword ptr ss : [esp+0x28]
        mov ebp, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x20], eax
        je public_6d2ef71
        public_6d2ef56 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        xor eax, eax
        mov ax, word ptr ds : [esi+8]
        push eax
        push ecx
        call ebp
        add esp, 8
        test eax, eax
        je public_6d2ef71
        mov esi, dword ptr ds : [esi]
        cmp esi, ebx
        jne public_6d2ef56
        public_6d2ef71 : nop
        cmp dword ptr ds : [edi+0x40], esi
        jne public_6d2f03e
        lea edx, ss:[esp+0x10]
        push edx
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x34]
        mov dword ptr ss : [esp+0x20], offset _public_6d3e580
        call public_6d41b00
        mov ebx, dword ptr ds : [edi+0x4C]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x1C], ecx
        mov dword ptr ss : [esp+0x20], edx
        je public_6d2efc6
        mov edi, edi
        public_6d2efb0 : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [esi+8]
        push eax
        call dword ptr ss : [esp+0x20]
        test al, al
        jne public_6d2efc6
        mov esi, dword ptr ds : [esi]
        cmp esi, ebx
        jne public_6d2efb0
        public_6d2efc6 : nop
        cmp dword ptr ds : [edi+0x4C], esi
        jne public_6d2f03e
        public_6d2efcb : nop
        xor eax, eax
        jmp public_6d2f043
        public_6d2efcf : nop
        mov ecx, dword ptr ds : [edi+0x30]
        test ecx, ecx
        je public_6d2f01c
        mov eax, dword ptr ds : [edi+0x34]
        sub eax, ecx
        sar eax, 2
        test eax, eax
        je public_6d2f01c
        mov ebp, dword ptr ds : [edi+0x34]
        mov esi, ecx
        mov ecx, ebp
        sub ecx, esi
        sar ecx, 2
        test ecx, ecx
        jle public_6d2f013
        public_6d2eff2 : nop
        mov eax, ecx
        cdq 
        sub eax, edx
        sar eax, 1
        cmp word ptr ds : [esi+eax*4+2], bx
        jae public_6d2f00d
        or edx, 0xFFFFFFFF
        sub edx, eax
        lea esi, ds:[esi+eax*4+4]
        add ecx, edx
        jmp public_6d2f00f
        public_6d2f00d : nop
        mov ecx, eax
        public_6d2f00f : nop
        test ecx, ecx
        jg public_6d2eff2
        public_6d2f013 : nop
        cmp esi, ebp
        je public_6d2f01c
        cmp bx, word ptr ds : [esi]
        jae public_6d2f03e
        public_6d2f01c : nop
        xor eax, eax
        mov ax, word ptr ds : [edi+0x28]
        test ax, ax
        je public_6d2ef16
        push eax
        push ebx
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d2ef16
        public_6d2f03e : nop
        mov eax, 1
        public_6d2f043 : nop
        movzx ecx, byte ptr ds : [edi+4]
        cmp ecx, eax
        pop edi
        pop esi
        pop ebp
        je public_6d2f05e
        mov eax, dword ptr ss : [esp+0x30]
        add dword ptr ds : [eax], 2
        mov al, 1
        pop ebx
        add esp, 0x24
        ret 8
        public_6d2f05e : nop
        xor al, al
        pop ebx
        add esp, 0x24
        ret 8
        UNREACHABLE_TRAP(0x6d2eec0)
    }
}

#undef public_6d2eefa
#undef public_6d2ef16
#undef public_6d2ef56
#undef public_6d2ef71
#undef public_6d2efb0
#undef public_6d2efc6
#undef public_6d2efcb
#undef public_6d2efcf
#undef public_6d2eff2
#undef public_6d2f00d
#undef public_6d2f00f
#undef public_6d2f013
#undef public_6d2f01c
#undef public_6d2f03e
#undef public_6d2f043
#undef public_6d2f05e
