#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef6fa2);
CLANG_FORWARD_PROC_SYMBOL(public_6ef9b54);
CLANG_FORWARD_PROC_SYMBOL(public_6ef9bee);
CLANG_FORWARD_PROC_SYMBOL(public_6ef9d9b);
CLANG_FORWARD_PROC_SYMBOL(public_6ef9ddf);

#define public_6ef6fda _public_6ef6fda
#define public_6ef7002 _public_6ef7002
#define public_6ef700d _public_6ef700d
#define public_6ef7014 _public_6ef7014
#define public_6ef7044 _public_6ef7044
#define public_6ef705f _public_6ef705f
#define public_6ef7064 _public_6ef7064
#define public_6ef7077 _public_6ef7077
#define public_6ef7081 _public_6ef7081
#define public_6ef7095 _public_6ef7095
#define public_6ef70a1 _public_6ef70a1
#define public_6ef70ab _public_6ef70ab
#define public_6ef70b0 _public_6ef70b0
#define public_6ef70b3 _public_6ef70b3

PROC_DECLARE(0x6ef6fa2, internal_6ef6fa2, public_6ef6fa2);
extern "C" NAKED register_t __cdecl internal_6ef6fa2()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        mov esi, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [esi+0xC]
        mov ebx, dword ptr ds : [esi+0x10]
        test al, 0x82
        je public_6ef70ab
        test al, 0x40
        jne public_6ef70ab
        test al, 1
        je public_6ef6fda
        and dword ptr ds : [esi+4], 0
        test al, 0x10
        je public_6ef70ab
        mov ecx, dword ptr ds : [esi+8]
        and al, 0xFE
        mov dword ptr ds : [esi], ecx
        mov dword ptr ds : [esi+0xC], eax
        public_6ef6fda : nop
        mov eax, dword ptr ds : [esi+0xC]
        and dword ptr ds : [esi+4], 0
        and dword ptr ss : [ebp+0xC], 0
        and al, 0xEF
        or al, 2
        test ax, 0x10C
        mov dword ptr ds : [esi+0xC], eax
        jne public_6ef7014
        cmp esi, offset public_6f00878
        je public_6ef7002
        cmp esi, offset public_6f00898
        jne public_6ef700d
        public_6ef7002 : nop
        push ebx
        call public_6ef9ddf
        test eax, eax
        pop ecx
        jne public_6ef7014
        public_6ef700d : nop
        push esi
        call public_6ef9d9b
        pop ecx
        public_6ef7014 : nop
        test word ptr ds : [esi+0xC], 0x108
        push edi
        je public_6ef7081
        mov eax, dword ptr ds : [esi+8]
        mov edi, dword ptr ds : [esi]
        sub edi, eax
        lea ecx, ds:[eax+1]
        mov dword ptr ds : [esi], ecx
        mov ecx, dword ptr ds : [esi+0x18]
        dec ecx
        test edi, edi
        mov dword ptr ds : [esi+4], ecx
        jle public_6ef7044
        push edi
        push eax
        push ebx
        call public_6ef9bee
        add esp, 0xC
        mov dword ptr ss : [ebp+0xC], eax
        jmp public_6ef7077
        public_6ef7044 : nop
        cmp ebx, 0xFFFFFFFF
        je public_6ef705f
        mov eax, ebx
        mov ecx, ebx
        sar eax, 5
        and ecx, 0x1F
        mov eax, dword ptr ds : [eax*4+public_6f02540]
        lea eax, ds:[eax+ecx*8]
        jmp public_6ef7064
        public_6ef705f : nop
        mov eax, offset public_6f00570
        public_6ef7064 : nop
        test byte ptr ds : [eax+4], 0x20
        je public_6ef7077
        push 2
        push 0
        push ebx
        call public_6ef9b54
        add esp, 0xC
        public_6ef7077 : nop
        mov eax, dword ptr ds : [esi+8]
        mov cl, byte ptr ss : [ebp+8]
        mov byte ptr ds : [eax], cl
        jmp public_6ef7095
        public_6ef7081 : nop
        push 1
        lea eax, ss:[ebp+8]
        pop edi
        push edi
        push eax
        push ebx
        call public_6ef9bee
        add esp, 0xC
        mov dword ptr ss : [ebp+0xC], eax
        public_6ef7095 : nop
        cmp dword ptr ss : [ebp+0xC], edi
        pop edi
        je public_6ef70a1
        or dword ptr ds : [esi+0xC], 0x20
        jmp public_6ef70b0
        public_6ef70a1 : nop
        mov eax, dword ptr ss : [ebp+8]
        and eax, 0xFF
        jmp public_6ef70b3
        public_6ef70ab : nop
        or al, 0x20
        mov dword ptr ds : [esi+0xC], eax
        public_6ef70b0 : nop
        or eax, 0xFFFFFFFF
        public_6ef70b3 : nop
        pop esi
        pop ebx
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6ef6fa2)
    }
}

#undef public_6ef6fda
#undef public_6ef7002
#undef public_6ef700d
#undef public_6ef7014
#undef public_6ef7044
#undef public_6ef705f
#undef public_6ef7064
#undef public_6ef7077
#undef public_6ef7081
#undef public_6ef7095
#undef public_6ef70a1
#undef public_6ef70ab
#undef public_6ef70b0
#undef public_6ef70b3
