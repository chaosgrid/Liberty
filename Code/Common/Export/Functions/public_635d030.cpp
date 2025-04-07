#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63441a0);
CLANG_FORWARD_PROC_SYMBOL(public_63523d0);
CLANG_FORWARD_PROC_SYMBOL(public_6352580);
CLANG_FORWARD_PROC_SYMBOL(public_635c2c0);
CLANG_FORWARD_PROC_SYMBOL(public_635c310);
CLANG_FORWARD_PROC_SYMBOL(public_635c590);
CLANG_FORWARD_PROC_SYMBOL(public_635c620);
CLANG_FORWARD_PROC_SYMBOL(public_635c980);
CLANG_FORWARD_PROC_SYMBOL(public_635c9d0);
CLANG_FORWARD_PROC_SYMBOL(public_635cbd0);
CLANG_FORWARD_PROC_SYMBOL(public_635ce90);
CLANG_FORWARD_PROC_SYMBOL(public_635d030);
CLANG_FORWARD_PROC_SYMBOL(public_6369200);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_639829b);

#define public_635d05e _public_635d05e
#define public_635d0b4 _public_635d0b4
#define public_635d0cc _public_635d0cc
#define public_635d0ed _public_635d0ed
#define public_635d134 _public_635d134
#define public_635d173 _public_635d173
#define public_635d193 _public_635d193
#define public_635d19d _public_635d19d
#define public_635d1be _public_635d1be
#define public_635d1eb _public_635d1eb
#define public_635d1f7 _public_635d1f7
#define public_635d226 _public_635d226
#define public_635d22a _public_635d22a
#define public_635d248 _public_635d248
#define public_635d24c _public_635d24c

PROC_DECLARE(0x635d030, internal_635d030, public_635d030);
extern "C" NAKED register_t __cdecl internal_635d030()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_639829b @0x635d038*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_639829b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        test ebp, ebp
        push esi
        push edi
        mov esi, ecx
        jne public_635d05e
        fld dword ptr ds : [public_63a53d4]
        jmp public_635d24c
        public_635d05e : nop
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x24]
        push eax
        push ecx
        push ebp
        mov ecx, esi
        call public_635c620
        fst dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [ebp+0x20]
        mov edi, dword ptr ds : [esi+0x170]
        lea ebx, ds:[esi+0x144]
        push ebx
        mov ecx, edi
        call public_6369200
        push eax
        push ebx
        mov ecx, edi
        call public_6352580
        test eax, eax
        mov dword ptr ss : [esp+0x20], eax
        je public_635d0cc
        mov dx, word ptr ds : [eax+0x22]
        cmp dx, word ptr ds : [eax+0x20]
        lea edi, ds:[eax+0x20]
        jb public_635d0b4
        mov ecx, edi
        call public_63441a0
        mov eax, dword ptr ss : [esp+0x20]
        public_635d0b4 : nop
        mov edx, dword ptr ds : [edi+4]
        xor ecx, ecx
        mov cx, word ptr ds : [edi+2]
        mov dword ptr ds : [edx+ecx*4], ebp
        inc word ptr ds : [edi+2]
        mov dword ptr ss : [ebp+8], eax
        jmp public_635d22a
        public_635d0cc : nop
        push 0x28
        call public_6391d9c
        add esp, 4
        mov dword ptr ss : [esp+0x20], eax
        xor edi, edi
        cmp eax, edi
        mov dword ptr ss : [esp+0x18], edi
        je public_635d0ed
        mov ecx, eax
        call public_635c2c0
        mov edi, eax
        public_635d0ed : nop
        mov eax, dword ptr ds : [ebx]
        mov dword ptr ds : [edi], eax
        mov ecx, dword ptr ds : [esi+0x148]
        mov dword ptr ds : [edi+4], ecx
        mov edx, dword ptr ds : [esi+0x14C]
        mov dword ptr ds : [edi+8], edx
        mov eax, dword ptr ds : [esi+0x150]
        mov dword ptr ds : [edi+0xC], eax
        mov ecx, dword ptr ds : [esi+0x154]
        lea ebx, ds:[edi+0x20]
        mov dword ptr ds : [edi+0x10], ecx
        mov dx, word ptr ds : [ebx+2]
        cmp dx, word ptr ds : [ebx]
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x20], edi
        jb public_635d134
        mov ecx, ebx
        call public_63441a0
        public_635d134 : nop
        mov ecx, dword ptr ds : [ebx+4]
        xor eax, eax
        mov ax, word ptr ds : [ebx+2]
        mov dword ptr ds : [ecx+eax*4], ebp
        inc word ptr ds : [ebx+2]
        mov dword ptr ss : [ebp+8], edi
        mov eax, dword ptr ds : [esi+0x178]
        test eax, eax
        jne public_635d173
        mov dword ptr ds : [esi+0x178], edi
        mov esi, dword ptr ds : [esi+0x170]
        push edi
        mov ecx, esi
        call public_6369200
        push eax
        push edi
        mov ecx, esi
        call public_63523d0
        jmp public_635d248
        public_635d173 : nop
        mov ecx, dword ptr ds : [esi+0x178]
        mov eax, dword ptr ds : [ecx+0xC]
        mov edx, dword ptr ds : [edi+0xC]
        cmp eax, edx
        jl public_635d193
        sub eax, edx
        push eax
        push edi
        push ecx
        mov ecx, esi
        call public_635c590
        test eax, eax
        jne public_635d19d
        public_635d193 : nop
        push edi
        mov ecx, esi
        call public_635cbd0
        jmp public_635d173
        public_635d19d : nop
        mov eax, dword ptr ds : [esi+0x178]
        mov edx, dword ptr ds : [eax+0xC]
        cmp edx, dword ptr ds : [edi+0xC]
        jne public_635d1f7
        lea ebx, ds:[eax+0x20]
        mov ax, word ptr ds : [ebx+2]
        cmp ax, word ptr ds : [ebx]
        jb public_635d1be
        mov ecx, ebx
        call public_63441a0
        public_635d1be : nop
        mov edx, dword ptr ds : [ebx+4]
        xor ecx, ecx
        mov cx, word ptr ds : [ebx+2]
        mov dword ptr ds : [edx+ecx*4], ebp
        inc word ptr ds : [ebx+2]
        test edi, edi
        mov eax, dword ptr ds : [esi+0x178]
        mov dword ptr ss : [ebp+8], eax
        je public_635d1eb
        mov ecx, edi
        call public_635c310
        push edi
        call public_6391d5a
        add esp, 4
        public_635d1eb : nop
        mov ecx, dword ptr ds : [esi+0x178]
        mov dword ptr ss : [esp+0x20], ecx
        jmp public_635d226
        public_635d1f7 : nop
        mov ebx, dword ptr ds : [esi+0x170]
        push edi
        mov ecx, ebx
        call public_6369200
        push eax
        push edi
        mov ecx, ebx
        call public_63523d0
        mov edx, dword ptr ds : [esi+0x178]
        push edi
        push edx
        mov ecx, esi
        call public_635c980
        push edi
        push eax
        mov ecx, esi
        call public_635c9d0
        public_635d226 : nop
        mov eax, dword ptr ss : [esp+0x20]
        public_635d22a : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        test ecx, ecx
        mov dword ptr ds : [esi+0x16C], ecx
        je public_635d248
        push eax
        mov eax, dword ptr ds : [esi+0x178]
        push eax
        push ebp
        mov ecx, esi
        call public_635ce90
        public_635d248 : nop
        fld dword ptr ss : [esp+0x28]
        public_635d24c : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0xC
        ret 0x10
        UNREACHABLE_TRAP(0x635d030)
    }
}

#undef public_635d05e
#undef public_635d0b4
#undef public_635d0cc
#undef public_635d0ed
#undef public_635d134
#undef public_635d173
#undef public_635d193
#undef public_635d19d
#undef public_635d1be
#undef public_635d1eb
#undef public_635d1f7
#undef public_635d226
#undef public_635d22a
#undef public_635d248
#undef public_635d24c
