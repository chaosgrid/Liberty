#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f003e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f14780);

#define public_6f147c0 _public_6f147c0
#define public_6f147d5 _public_6f147d5
#define public_6f147e0 _public_6f147e0
#define public_6f14800 _public_6f14800
#define public_6f14804 _public_6f14804
#define public_6f14809 _public_6f14809
#define public_6f1482b _public_6f1482b
#define public_6f14835 _public_6f14835
#define public_6f14850 _public_6f14850
#define public_6f14865 _public_6f14865
#define public_6f14870 _public_6f14870
#define public_6f14890 _public_6f14890
#define public_6f14894 _public_6f14894
#define public_6f14899 _public_6f14899
#define public_6f148c5 _public_6f148c5
#define public_6f148d8 _public_6f148d8

PROC_DECLARE(0x6f14780, internal_6f14780, public_6f14780);
extern "C" NAKED register_t __cdecl internal_6f14780()
{
    __asm
    {
        sub esp, 0x18
        mov eax, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [eax]
        push ebx
        push ebp
        push esi
        mov ebx, ecx
        mov ecx, dword ptr ds : [eax+4]
        push edi
        lea edx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x14], eax
        push edx
        lea eax, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x14], ecx
        push eax
        lea ecx, ds:[ebx+0xA4]
        mov dword ptr ss : [esp+0x20], ebx
        call public_6f003e0
        mov eax, dword ptr ds : [ebx+0x150]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        je public_6f14835
        nop 
        public_6f147c0 : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        mov ebp, dword ptr ds : [ecx]
        lea esi, ds:[edi+0xC]
        test esi, esi
        jne public_6f147d5
        mov eax, dword ptr ss : [ebp+0xD4]
        jmp public_6f14809
        public_6f147d5 : nop
        lea eax, ss:[ebp+0xD8]
        nop 
        lea esp, ss:[esp]
        public_6f147e0 : nop
        mov dl, byte ptr ds : [eax]
        mov cl, dl
        cmp dl, byte ptr ds : [esi]
        jne public_6f14804
        test cl, cl
        je public_6f14800
        mov dl, byte ptr ds : [eax+1]
        mov cl, dl
        cmp dl, byte ptr ds : [esi+1]
        jne public_6f14804
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6f147e0
        public_6f14800 : nop
        xor eax, eax
        jmp public_6f14809
        public_6f14804 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6f14809 : nop
        test eax, eax
        sete al
        test al, al
        je public_6f1482b
        mov eax, dword ptr ds : [edi+0x3C]
        mov edx, dword ptr ss : [ebp+4]
        xor ecx, ecx
        mov cl, byte ptr ds : [edi+0x40]
        push eax
        push ecx
        push 1
        push edx
        call dword ptr ds : [public_6fb3650]
        add esp, 0x10
        public_6f1482b : nop
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ds : [ebx+0x150]
        jne public_6f147c0
        public_6f14835 : nop
        mov eax, dword ptr ds : [ebx+0x15C]
        mov ebp, dword ptr ds : [eax]
        cmp ebp, eax
        je public_6f148d8
        mov ebx, dword ptr ds : [public_6fb33c0]
        nop 
        lea esp, ss:[esp]
        public_6f14850 : nop
        mov eax, dword ptr ss : [esp+0x2C]
        mov edi, dword ptr ds : [eax]
        lea esi, ss:[ebp+0xC]
        test esi, esi
        jne public_6f14865
        mov eax, dword ptr ds : [edi+0xD4]
        jmp public_6f14899
        public_6f14865 : nop
        lea eax, ds:[edi+0xD8]
        nop 
        lea esp, ss:[esp]
        public_6f14870 : nop
        mov dl, byte ptr ds : [eax]
        mov cl, dl
        cmp dl, byte ptr ds : [esi]
        jne public_6f14894
        test cl, cl
        je public_6f14890
        mov dl, byte ptr ds : [eax+1]
        mov cl, dl
        cmp dl, byte ptr ds : [esi+1]
        jne public_6f14894
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6f14870
        public_6f14890 : nop
        xor eax, eax
        jmp public_6f14899
        public_6f14894 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6f14899 : nop
        test eax, eax
        sete al
        test al, al
        je public_6f148c5
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x1C], 2
        mov byte ptr ss : [esp+0x20], 0
        mov eax, dword ptr ds : [edi+4]
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        mov dword ptr ss : [esp+0x18], eax
        call ebx
        add esp, 8
        public_6f148c5 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov ebp, dword ptr ss : [ebp]
        cmp ebp, dword ptr ds : [eax+0x15C]
        jne public_6f14850
        public_6f148d8 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 4
        UNREACHABLE_TRAP(0x6f14780)
    }
}

#undef public_6f147c0
#undef public_6f147d5
#undef public_6f147e0
#undef public_6f14800
#undef public_6f14804
#undef public_6f14809
#undef public_6f1482b
#undef public_6f14835
#undef public_6f14850
#undef public_6f14865
#undef public_6f14870
#undef public_6f14890
#undef public_6f14894
#undef public_6f14899
#undef public_6f148c5
#undef public_6f148d8
