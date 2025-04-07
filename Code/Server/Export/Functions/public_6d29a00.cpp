#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d3e580);
CLANG_FORWARD_PROC_SYMBOL(public_6d41b00);

#define public_6d29a3e _public_6d29a3e
#define public_6d29a5a _public_6d29a5a
#define public_6d29aa0 _public_6d29aa0
#define public_6d29abb _public_6d29abb
#define public_6d29af8 _public_6d29af8
#define public_6d29b0e _public_6d29b0e
#define public_6d29b13 _public_6d29b13
#define public_6d29b17 _public_6d29b17
#define public_6d29b40 _public_6d29b40
#define public_6d29b5b _public_6d29b5b
#define public_6d29b5d _public_6d29b5d
#define public_6d29b61 _public_6d29b61
#define public_6d29b6a _public_6d29b6a
#define public_6d29b8c _public_6d29b8c
#define public_6d29b91 _public_6d29b91
#define public_6d29bac _public_6d29bac

PROC_DECLARE(0x6d29a00, internal_6d29a00, public_6d29a00);
extern "C" NAKED register_t __cdecl internal_6d29a00()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax]
        sub esp, 0x20
        push esi
        cmp dword ptr ds : [edx+0xC], eax
        je public_6d29bac
        push ebx
        mov bx, word ptr ds : [eax]
        cmp bx, 0xFF
        push ebp
        push edi
        mov edi, dword ptr ds : [ecx+0xC]
        ja public_6d29b17
        xor eax, eax
        mov al, bl
        mov ecx, eax
        and ecx, 0x8000001F
        jns public_6d29a3e
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d29a3e : nop
        shr eax, 5
        mov edx, 1
        shl edx, cl
        test dword ptr ds : [edi+eax*4+8], edx
        setne al
        movzx eax, al
        test eax, eax
        jne public_6d29b8c
        public_6d29a5a : nop
        mov al, byte ptr ds : [edi+5]
        test al, al
        mov dword ptr ss : [esp+0x34], ebx
        jne public_6d29b13
        mov eax, dword ptr ds : [public_6d64bb0]
        lea ecx, ss:[esp+0x34]
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x18], eax
        call public_6d41b00
        mov ebx, dword ptr ds : [edi+0x40]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        mov eax, dword ptr ss : [esp+0x24]
        mov ebp, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x1C], eax
        je public_6d29abb
        lea ebx, ds:[ebx]
        public_6d29aa0 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        xor eax, eax
        mov ax, word ptr ds : [esi+8]
        push eax
        push ecx
        call ebp
        add esp, 8
        test eax, eax
        je public_6d29abb
        mov esi, dword ptr ds : [esi]
        cmp esi, ebx
        jne public_6d29aa0
        public_6d29abb : nop
        cmp dword ptr ds : [edi+0x40], esi
        jne public_6d29b8c
        lea edx, ss:[esp+0x34]
        push edx
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x1C], offset _public_6d3e580
        call public_6d41b00
        mov ebx, dword ptr ds : [edi+0x4C]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ss : [esp+0x1C], edx
        je public_6d29b0e
        public_6d29af8 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [esi+8]
        push eax
        call dword ptr ss : [esp+0x1C]
        test al, al
        jne public_6d29b0e
        mov esi, dword ptr ds : [esi]
        cmp esi, ebx
        jne public_6d29af8
        public_6d29b0e : nop
        cmp dword ptr ds : [edi+0x4C], esi
        jne public_6d29b8c
        public_6d29b13 : nop
        xor eax, eax
        jmp public_6d29b91
        public_6d29b17 : nop
        mov ecx, dword ptr ds : [edi+0x30]
        test ecx, ecx
        je public_6d29b6a
        mov eax, dword ptr ds : [edi+0x34]
        sub eax, ecx
        sar eax, 2
        test eax, eax
        je public_6d29b6a
        mov ebp, dword ptr ds : [edi+0x34]
        mov esi, ecx
        mov ecx, ebp
        sub ecx, esi
        sar ecx, 2
        test ecx, ecx
        jle public_6d29b61
        lea ebx, ds:[ebx]
        public_6d29b40 : nop
        mov eax, ecx
        cdq 
        sub eax, edx
        sar eax, 1
        cmp word ptr ds : [esi+eax*4+2], bx
        jae public_6d29b5b
        or edx, 0xFFFFFFFF
        sub edx, eax
        lea esi, ds:[esi+eax*4+4]
        add ecx, edx
        jmp public_6d29b5d
        public_6d29b5b : nop
        mov ecx, eax
        public_6d29b5d : nop
        test ecx, ecx
        jg public_6d29b40
        public_6d29b61 : nop
        cmp esi, ebp
        je public_6d29b6a
        cmp bx, word ptr ds : [esi]
        jae public_6d29b8c
        public_6d29b6a : nop
        xor eax, eax
        mov ax, word ptr ds : [edi+0x28]
        test ax, ax
        je public_6d29a5a
        push eax
        push ebx
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d29a5a
        public_6d29b8c : nop
        mov eax, 1
        public_6d29b91 : nop
        movzx ecx, byte ptr ds : [edi+4]
        cmp ecx, eax
        pop edi
        pop ebp
        pop ebx
        je public_6d29bac
        mov eax, dword ptr ss : [esp+0x2C]
        add dword ptr ds : [eax], 2
        mov al, 1
        pop esi
        add esp, 0x20
        ret 8
        public_6d29bac : nop
        xor al, al
        pop esi
        add esp, 0x20
        ret 8
        UNREACHABLE_TRAP(0x6d29a00)
    }
}

#undef public_6d29a3e
#undef public_6d29a5a
#undef public_6d29aa0
#undef public_6d29abb
#undef public_6d29af8
#undef public_6d29b0e
#undef public_6d29b13
#undef public_6d29b17
#undef public_6d29b40
#undef public_6d29b5b
#undef public_6d29b5d
#undef public_6d29b61
#undef public_6d29b6a
#undef public_6d29b8c
#undef public_6d29b91
#undef public_6d29bac
