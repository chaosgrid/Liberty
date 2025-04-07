#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636e1b0);
CLANG_FORWARD_PROC_SYMBOL(public_636e740);
CLANG_FORWARD_PROC_SYMBOL(public_636e9c0);
CLANG_FORWARD_PROC_SYMBOL(public_636ec70);
CLANG_FORWARD_PROC_SYMBOL(public_636ecc0);
CLANG_FORWARD_PROC_SYMBOL(public_6372280);
CLANG_FORWARD_PROC_SYMBOL(public_63864e0);
CLANG_FORWARD_PROC_SYMBOL(public_6389050);
CLANG_FORWARD_PROC_SYMBOL(public_6389230);
CLANG_FORWARD_PROC_SYMBOL(public_638ac90);
CLANG_FORWARD_PROC_SYMBOL(public_638afe0);

#define public_63892e1 _public_63892e1
#define public_63892fb _public_63892fb
#define public_6389319 _public_6389319
#define public_6389336 _public_6389336
#define public_638936e _public_638936e
#define public_6389376 _public_6389376
#define public_63893a6 _public_63893a6
#define public_63893d3 _public_63893d3
#define public_63893e8 _public_63893e8
#define public_638940c _public_638940c
#define public_638945f _public_638945f
#define public_6389488 _public_6389488
#define public_6389495 _public_6389495
#define public_63894a2 _public_63894a2

PROC_DECLARE(0x6389230, internal_6389230, public_6389230);
extern "C" NAKED register_t __cdecl internal_6389230()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x4C
        push ebx
        mov ebx, dword ptr ss : [ebp+0xC]
        push esi
        push edi
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        push ebx
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x44], 0
        mov dword ptr ss : [esp+0x48], 0
        mov dword ptr ss : [esp+0x4C], 0
        mov dword ptr ss : [esp+0x50], 0
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x58], 0x3FF00000
        mov dword ptr ss : [esp+0x5C], 0
        mov dword ptr ss : [esp+0x60], 0
        call public_63864e0
        push ebx
        call public_6372280
        mov edx, dword ptr ds : [public_658b80c]
        push edx
        mov dword ptr ss : [esp+0x24], eax
        call public_636ec70
        mov esi, dword ptr ss : [esp+0x24]
        add esp, 0x14
        test esi, esi
        mov dword ptr ss : [esp+0x14], eax
        je public_63892fb
        mov eax, dword ptr ds : [esi+4]
        add esi, 4
        add esi, 4
        test eax, eax
        je public_63892fb
        public_63892e1 : nop
        mov eax, dword ptr ds : [eax+8]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        call public_636e1b0
        mov eax, dword ptr ds : [esi]
        add esp, 8
        add esi, 4
        test eax, eax
        jne public_63892e1
        public_63892fb : nop
        mov eax, dword ptr ds : [public_658b110]
        test eax, eax
        mov esi, dword ptr ss : [ebp+0x10]
        jne public_6389319
        mov eax, dword ptr ds : [public_658b108]
        test eax, eax
        jne public_6389336
        mov eax, dword ptr ds : [public_658b100]
        test eax, eax
        jne public_638936e
        public_6389319 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x14]
        push esi
        push edx
        mov edx, dword ptr ss : [ebp+8]
        push eax
        push ebx
        push ecx
        push edx
        call public_6389050
        add esp, 0x18
        public_6389336 : nop
        mov eax, dword ptr ds : [public_658b100]
        test eax, eax
        jne public_638936e
        mov eax, dword ptr ds : [public_658b108]
        test eax, eax
        jne public_63893a6
        mov eax, dword ptr ds : [public_658b110]
        test eax, eax
        jne public_63893a6
        fld qword ptr ss : [esp+0x18]
        fsub qword ptr ss : [esp+0x20]
        fld qword ptr ds : [public_658b6a8]
        fmul qword ptr ds : [public_63a5a60]
        fcompp 
        fnstsw ax
        test ah, 1
        je public_63893a6
        public_638936e : nop
        lea eax, ds:[esi+0x10]
        mov ecx, 3
        public_6389376 : nop
        fld qword ptr ds : [public_63a5940]
        dec ecx
        fsub qword ptr ds : [eax]
        sub eax, 8
        test ecx, ecx
        fstp qword ptr ds : [eax+8]
        ja public_6389376
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x14]
        push esi
        push eax
        mov eax, dword ptr ss : [ebp+8]
        push ecx
        push ebx
        push edx
        push eax
        call public_6389050
        add esp, 0x18
        public_63893a6 : nop
        lea ecx, ss:[esp+0x14]
        push ecx
        call public_636ecc0
        lea edx, ss:[esp+0x14]
        push edx
        call public_636ecc0
        mov eax, dword ptr ds : [public_658b054]
        add esp, 8
        test eax, eax
        jne public_63893d3
        mov eax, dword ptr ds : [public_658b188]
        test eax, eax
        je public_63894a2
        public_63893d3 : nop
        mov eax, dword ptr ds : [ebx+0x50]
        test ah, 4
        je public_63893e8
        mov eax, dword ptr ds : [public_658b8a0]
        test eax, eax
        jne public_63894a2
        public_63893e8 : nop
        mov edi, dword ptr ds : [ebx+0x3C]
        test edi, edi
        mov eax, dword ptr ds : [public_658b8e0]
        mov dword ptr ds : [ebx+0x48], eax
        je public_63894a2
        mov esi, dword ptr ds : [edi+4]
        add edi, 4
        add edi, 4
        test esi, esi
        je public_63894a2
        public_638940c : nop
        mov ecx, dword ptr ds : [esi+0x48]
        cmp ecx, dword ptr ds : [public_658b8e0]
        je public_6389495
        mov ecx, dword ptr ds : [ebx+0x3C]
        mov eax, dword ptr ds : [public_658b24c]
        mov edx, edi
        sub edx, ecx
        mov ecx, dword ptr ds : [ebx+0x34]
        sub edx, 8
        push 0
        sar edx, 2
        push edx
        push eax
        push ecx
        call public_636e9c0
        mov ecx, dword ptr ds : [public_658b054]
        add esp, 0x10
        test ecx, ecx
        mov dword ptr ss : [esp+0x10], eax
        je public_638945f
        lea edx, ss:[esp+0x28]
        push edx
        push eax
        mov eax, dword ptr ss : [ebp+8]
        push esi
        push ebx
        push eax
        call public_638ac90
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 0x14
        public_638945f : nop
        mov ecx, dword ptr ds : [public_658b188]
        test ecx, ecx
        je public_6389488
        mov edx, dword ptr ds : [eax+8]
        lea ecx, ss:[esp+0x40]
        push ecx
        mov ecx, dword ptr ds : [edx+8]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+8]
        push ecx
        mov ecx, dword ptr ss : [ebp+8]
        push eax
        push ecx
        call public_638afe0
        add esp, 0x10
        public_6389488 : nop
        lea edx, ss:[esp+0x10]
        push edx
        call public_636e740
        add esp, 4
        public_6389495 : nop
        mov esi, dword ptr ds : [edi]
        add edi, 4
        test esi, esi
        jne public_638940c
        public_63894a2 : nop
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6389230)
    }
}

#undef public_63892e1
#undef public_63892fb
#undef public_6389319
#undef public_6389336
#undef public_638936e
#undef public_6389376
#undef public_63893a6
#undef public_63893d3
#undef public_63893e8
#undef public_638940c
#undef public_638945f
#undef public_6389488
#undef public_6389495
#undef public_63894a2
