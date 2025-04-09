#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4142a0);
CLANG_FORWARD_PROC_SYMBOL(public_4145d0);
CLANG_FORWARD_PROC_SYMBOL(public_415860);
CLANG_FORWARD_PROC_SYMBOL(public_42d680);
CLANG_FORWARD_PROC_SYMBOL(public_42d740);
CLANG_FORWARD_PROC_SYMBOL(public_564650);
CLANG_FORWARD_PROC_SYMBOL(public_5646e0);
CLANG_FORWARD_PROC_SYMBOL(public_58b060);
CLANG_FORWARD_PROC_SYMBOL(public_5a17b0);

#define public_58b0ce _public_58b0ce
#define public_58b10b _public_58b10b
#define public_58b11d _public_58b11d
#define public_58b166 _public_58b166
#define public_58b18c _public_58b18c
#define public_58b18e _public_58b18e
#define public_58b1a5 _public_58b1a5
#define public_58b1fb _public_58b1fb
#define public_58b22e _public_58b22e
#define public_58b24a _public_58b24a
#define public_58b275 _public_58b275
#define public_58b295 _public_58b295
#define public_58b2cb _public_58b2cb
#define public_58b300 _public_58b300
#define public_58b326 _public_58b326
#define public_58b328 _public_58b328
#define public_58b346 _public_58b346
#define public_58b352 _public_58b352

PROC_DECLARE(0x58b060, internal_58b060, public_58b060);
extern "C" NAKED register_t __cdecl internal_58b060()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        call public_5a17b0
        mov al, byte ptr ds : [esi+0x362]
        test al, al
        mov bl, 2
        je public_58b24a
        mov eax, dword ptr ds : [esi+0x334]
        mov ecx, dword ptr ds : [eax+0x10]
        add eax, 0xC
        test ecx, ecx
        je public_58b24a
        mov eax, dword ptr ds : [eax+8]
        sub eax, ecx
        sar eax, 3
        test eax, eax
        je public_58b24a
        test byte ptr ds : [esi+0x6C], bl
        je public_58b24a
        call public_42d740
        test al, al
        jne public_58b24a
        mov eax, dword ptr ds : [esi+0x370]
        test eax, eax
        lea ebp, ds:[esi+0x370]
        je public_58b0ce
        cmp word ptr ds : [eax], 0
        jne public_58b11d
        public_58b0ce : nop
        mov eax, dword ptr ds : [esi+0x334]
        mov ebx, dword ptr ds : [eax]
        test ebx, ebx
        je public_58b10b
        push ebx
        call dword ptr ds : [public_5c71c8]
        mov edi, eax
        add esp, 4
        lea ecx, ds:[edi+1]
        push ecx
        mov ecx, ebp
        call public_4142a0
        mov edx, dword ptr ss : [ebp]
        push edi
        push ebx
        push edx
        call dword ptr ds : [public_5c71c0]
        mov eax, dword ptr ss : [ebp]
        add esp, 0xC
        mov word ptr ds : [eax+edi*2], 0
        jmp public_58b11d
        public_58b10b : nop
        mov eax, dword ptr ss : [ebp]
        test eax, eax
        je public_58b11d
        cmp word ptr ds : [eax], 0
        je public_58b11d
        mov word ptr ds : [eax], 0
        public_58b11d : nop
        mov eax, dword ptr ss : [ebp]
        test eax, eax
        je public_58b2cb
        cmp word ptr ds : [eax], 0
        je public_58b2cb
        fld dword ptr ds : [esi+0x368]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x44
        jp public_58b166
        push 0xB
        call public_564650
        mov al, byte ptr ds : [esi+0x389]
        add esp, 4
        test al, al
        jne public_58b166
        mov byte ptr ds : [esi+0x389], 1
        inc dword ptr ds : [public_67d8c8]
        public_58b166 : nop
        call public_42d680
        fadd dword ptr ds : [esi+0x368]
        fstp dword ptr ds : [esi+0x368]
        mov eax, dword ptr ss : [ebp]
        test eax, eax
        je public_58b18c
        push eax
        call dword ptr ds : [public_5c71c8]
        add esp, 4
        mov ebx, eax
        jmp public_58b18e
        public_58b18c : nop
        xor ebx, ebx
        public_58b18e : nop
        fld dword ptr ds : [esi+0x368]
        fcomp dword ptr ds : [esi+0x36C]
        fnstsw ax
        test ah, 0x41
        jne public_58b2cb
        public_58b1a5 : nop
        mov ecx, dword ptr ds : [esi+0x364]
        fld dword ptr ds : [esi+0x368]
        fsub dword ptr ds : [esi+0x36C]
        inc ecx
        mov eax, ecx
        cmp eax, ebx
        fstp dword ptr ds : [esi+0x368]
        mov dword ptr ds : [esi+0x364], ecx
        jl public_58b22e
        mov al, byte ptr ds : [esi+0x389]
        test al, al
        mov byte ptr ds : [esi+0x362], 0
        je public_58b22e
        mov byte ptr ds : [esi+0x389], 0
        mov eax, dword ptr ds : [public_67d8c8]
        dec eax
        test eax, eax
        mov dword ptr ds : [public_67d8c8], eax
        jg public_58b1fb
        push 0xB
        call public_5646e0
        add esp, 4
        public_58b1fb : nop
        fld dword ptr ds : [esi+0xB0]
        mov edx, dword ptr ds : [esi+0x32C]
        fadd dword ptr ds : [esi+0x68]
        mov edi, dword ptr ss : [ebp]
        fstp dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x18]
        push ecx
        mov ecx, dword ptr ds : [esi+0x334]
        push edx
        call public_4145d0
        mov ecx, dword ptr ds : [esi+0x334]
        push edi
        call public_415860
        public_58b22e : nop
        fld dword ptr ds : [esi+0x368]
        fcomp dword ptr ds : [esi+0x36C]
        fnstsw ax
        test ah, 0x41
        je public_58b1a5
        jmp public_58b2cb
        public_58b24a : nop
        mov al, byte ptr ds : [esi+0x389]
        test al, al
        je public_58b2cb
        test byte ptr ds : [esi+0x6C], bl
        je public_58b275
        mov eax, dword ptr ds : [esi+0x334]
        mov ecx, dword ptr ds : [eax+0x10]
        add eax, 0xC
        test ecx, ecx
        je public_58b275
        mov eax, dword ptr ds : [eax+8]
        sub eax, ecx
        sar eax, 3
        test eax, eax
        jne public_58b2cb
        public_58b275 : nop
        mov byte ptr ds : [esi+0x389], 0
        mov eax, dword ptr ds : [public_67d8c8]
        dec eax
        test eax, eax
        mov dword ptr ds : [public_67d8c8], eax
        jg public_58b295
        push 0xB
        call public_5646e0
        add esp, 4
        public_58b295 : nop
        fld dword ptr ds : [esi+0xB0]
        mov ecx, dword ptr ds : [esi+0x32C]
        fadd dword ptr ds : [esi+0x68]
        mov edi, dword ptr ds : [esi+0x370]
        fstp dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x18]
        push eax
        push ecx
        mov ecx, dword ptr ds : [esi+0x334]
        call public_4145d0
        mov ecx, dword ptr ds : [esi+0x334]
        push edi
        call public_415860
        public_58b2cb : nop
        mov al, byte ptr ds : [esi+0x379]
        test al, al
        je public_58b352
        call public_42d680
        fadd dword ptr ds : [esi+0x37C]
        fcom dword ptr ds : [public_5c75dc]
        fst dword ptr ds : [esi+0x37C]
        fnstsw ax
        test ah, 0x41
        jne public_58b326
        mov cl, byte ptr ds : [esi+0x37A]
        lea esp, ss:[esp]
        public_58b300 : nop
        fsub dword ptr ds : [public_5c75dc]
        test cl, cl
        sete cl
        fcom dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 0x41
        je public_58b300
        fstp dword ptr ds : [esi+0x37C]
        mov byte ptr ds : [esi+0x37A], cl
        jmp public_58b328
        public_58b326 : nop
        fstp st(0)
        public_58b328 : nop
        mov al, byte ptr ds : [esi+0x37A]
        test al, al
        je public_58b346
        mov edx, dword ptr ds : [esi+0x381]
        pop edi
        mov dword ptr ds : [esi+0x35E], edx
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        public_58b346 : nop
        mov eax, dword ptr ds : [esi+0x385]
        mov dword ptr ds : [esi+0x35E], eax
        public_58b352 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x58b060)
    }
}

#undef public_58b0ce
#undef public_58b10b
#undef public_58b11d
#undef public_58b166
#undef public_58b18c
#undef public_58b18e
#undef public_58b1a5
#undef public_58b1fb
#undef public_58b22e
#undef public_58b24a
#undef public_58b275
#undef public_58b295
#undef public_58b2cb
#undef public_58b300
#undef public_58b326
#undef public_58b328
#undef public_58b346
#undef public_58b352
