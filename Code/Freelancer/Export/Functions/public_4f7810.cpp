#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f7810);
CLANG_FORWARD_PROC_SYMBOL(public_4f7db0);
CLANG_FORWARD_PROC_SYMBOL(public_4fc920);
CLANG_FORWARD_PROC_SYMBOL(public_4fd560);

#define public_4f7831 _public_4f7831
#define public_4f7835 _public_4f7835
#define public_4f7880 _public_4f7880
#define public_4f78d1 _public_4f78d1
#define public_4f78de _public_4f78de
#define public_4f78ff _public_4f78ff
#define public_4f7910 _public_4f7910
#define public_4f7940 _public_4f7940
#define public_4f7945 _public_4f7945
#define public_4f7958 _public_4f7958
#define public_4f7962 _public_4f7962
#define public_4f7967 _public_4f7967
#define public_4f797f _public_4f797f
#define public_4f798c _public_4f798c

PROC_DECLARE(0x4f7810, internal_4f7810, public_4f7810);
extern "C" NAKED register_t __cdecl internal_4f7810()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        sub esp, 0xC
        lea eax, ds:[eax+eax*2]
        mov eax, dword ptr ds : [eax*4+public_674ce4]
        push ebp
        xor ebp, ebp
        cmp eax, ebp
        je public_4f798c
        push ebx
        push esi
        push edi
        jmp public_4f7835
        public_4f7831 : nop
        mov eax, dword ptr ss : [esp+0x28]
        public_4f7835 : nop
        mov esi, dword ptr ds : [eax+8]
        mov ecx, dword ptr ds : [eax+4]
        test byte ptr ds : [esi+8], 2
        mov dword ptr ss : [esp+0x28], ecx
        jne public_4f7910
        cmp dword ptr ds : [esi+0x40], 0xFFFFFFFF
        jne public_4f7880
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [esi+0x4C]
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [esi+0x50]
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [esi+0x54]
        fstp dword ptr ss : [esp+0x18]
        fxch 
        fadd dword ptr ds : [esi+0x34]
        fstp dword ptr ds : [esi+0x34]
        fadd dword ptr ds : [esi+0x38]
        fstp dword ptr ds : [esi+0x38]
        fld dword ptr ss : [esp+0x18]
        fadd dword ptr ds : [esi+0x3C]
        fstp dword ptr ds : [esi+0x3C]
        public_4f7880 : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov edi, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ds : [esi]
        push eax
        push edi
        mov ecx, esi
        call dword ptr ds : [edx+0x14]
        mov bl, al
        mov eax, dword ptr ds : [esi+0x5C]
        push eax
        call public_4fd560
        mov cl, byte ptr ds : [eax+0x14]
        add esp, 4
        test cl, cl
        jne public_4f78de
        test bl, bl
        jne public_4f78de
        cmp dword ptr ds : [esi+0x68], ebp
        jne public_4f78d1
        test byte ptr ds : [esi+8], 2
        jne public_4f78d1
        mov eax, dword ptr ds : [esi+0x5C]
        lea ecx, ds:[esi+0x60]
        lea edx, ds:[eax+eax*2]
        push ecx
        lea ecx, ds : [edx*4+public_674ce0]
        mov dword ptr ds : [esi+0x68], esi
        call public_4fc920
        inc dword ptr ds : [esi+0x58]
        public_4f78d1 : nop
        mov ecx, esi
        call public_4f7db0
        or byte ptr ds : [esi+8], 2
        jmp public_4f78ff
        public_4f78de : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [esi]
        push ecx
        push edi
        mov ecx, esi
        call dword ptr ds : [eax+0x18]
        test al, al
        je public_4f78ff
        test bl, bl
        je public_4f78ff
        mov eax, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x1C]
        public_4f78ff : nop
        test byte ptr ds : [esi+8], 2
        jne public_4f7910
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x10]
        test al, al
        jne public_4f797f
        public_4f7910 : nop
        cmp dword ptr ds : [esi+0x68], ebp
        je public_4f797f
        mov ecx, dword ptr ds : [esi+0x5C]
        lea eax, ds:[esi+0x60]
        cmp eax, ebp
        lea ecx, ds:[ecx+ecx*2]
        mov dword ptr ds : [esi+0x68], ebp
        lea edx, ds : [ecx*4+public_674ce0]
        je public_4f7967
        mov ecx, dword ptr ds : [eax]
        cmp ecx, ebp
        jne public_4f7945
        mov ecx, dword ptr ds : [eax+4]
        cmp ecx, ebp
        mov dword ptr ds : [edx+4], ecx
        je public_4f7940
        mov dword ptr ds : [ecx], ebp
        jmp public_4f7962
        public_4f7940 : nop
        mov dword ptr ds : [edx+8], ebp
        jmp public_4f7962
        public_4f7945 : nop
        mov edi, dword ptr ds : [eax+4]
        cmp edi, ebp
        jne public_4f7958
        cmp ecx, ebp
        mov dword ptr ds : [edx+8], ecx
        je public_4f7962
        mov dword ptr ds : [ecx+4], ebp
        jmp public_4f7962
        public_4f7958 : nop
        mov dword ptr ds : [ecx+4], edi
        mov edi, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], edi
        public_4f7962 : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [eax], ebp
        public_4f7967 : nop
        dec dword ptr ds : [edx]
        mov ecx, dword ptr ds : [esi+0x58]
        dec ecx
        mov eax, ecx
        cmp eax, ebp
        mov dword ptr ds : [esi+0x58], ecx
        jg public_4f797f
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        push 1
        call dword ptr ds : [edx+0x20]
        public_4f797f : nop
        cmp dword ptr ss : [esp+0x28], ebp
        jne public_4f7831
        pop edi
        pop esi
        pop ebx
        public_4f798c : nop
        pop ebp
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x4f7810)
    }
}

#undef public_4f7831
#undef public_4f7835
#undef public_4f7880
#undef public_4f78d1
#undef public_4f78de
#undef public_4f78ff
#undef public_4f7910
#undef public_4f7940
#undef public_4f7945
#undef public_4f7958
#undef public_4f7962
#undef public_4f7967
#undef public_4f797f
#undef public_4f798c
