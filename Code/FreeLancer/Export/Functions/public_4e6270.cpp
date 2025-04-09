#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_402580);
CLANG_FORWARD_PROC_SYMBOL(public_402720);
CLANG_FORWARD_PROC_SYMBOL(public_4058e0);
CLANG_FORWARD_PROC_SYMBOL(public_405b10);
CLANG_FORWARD_PROC_SYMBOL(public_410190);
CLANG_FORWARD_PROC_SYMBOL(public_4104c0);
CLANG_FORWARD_PROC_SYMBOL(public_423b60);
CLANG_FORWARD_PROC_SYMBOL(public_4e6160);
CLANG_FORWARD_PROC_SYMBOL(public_4e6580);
CLANG_FORWARD_PROC_SYMBOL(public_4e65d0);
CLANG_FORWARD_PROC_SYMBOL(public_4e7e70);
CLANG_FORWARD_PROC_SYMBOL(public_4e7f60);
CLANG_FORWARD_PROC_SYMBOL(public_5416c0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);
CLANG_FORWARD_JUMP_SYMBOL(public_5be918);

#define public_4e62c3 _public_4e62c3
#define public_4e62c5 _public_4e62c5
#define public_4e62da _public_4e62da
#define public_4e62dc _public_4e62dc
#define public_4e62ed _public_4e62ed
#define public_4e62ef _public_4e62ef
#define public_4e62fc _public_4e62fc
#define public_4e6339 _public_4e6339
#define public_4e633b _public_4e633b
#define public_4e634b _public_4e634b
#define public_4e634d _public_4e634d
#define public_4e63cc _public_4e63cc
#define public_4e63d8 _public_4e63d8
#define public_4e640c _public_4e640c
#define public_4e641b _public_4e641b
#define public_4e648e _public_4e648e
#define public_4e6490 _public_4e6490
#define public_4e655f _public_4e655f
#define public_4e656a _public_4e656a

PROC_DECLARE(0x4e6270, internal_4e6270, public_4e6270);
extern "C" NAKED register_t __cdecl internal_4e6270()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5be918 @0x4e6278*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5be918
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x4C
        push ebp
        mov ebp, ecx
        mov ecx, dword ptr ss : [esp+0x60]
        test ecx, ecx
        push esi
        push edi
        je public_4e62c3
        mov eax, dword ptr ds : [ecx]
        push 0
        call dword ptr ds : [eax+0x20]
        push eax
        call public_5416c0
        mov esi, eax
        add esp, 8
        test esi, esi
        je public_4e62c5
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x150]
        test eax, eax
        je public_4e62c3
        mov eax, dword ptr ds : [eax+0x4C]
        and eax, 3
        cmp al, 3
        je public_4e62c5
        public_4e62c3 : nop
        xor esi, esi
        public_4e62c5 : nop
        mov eax, dword ptr ss : [ebp+0x398]
        test eax, eax
        lea edi, ss:[ebp+0x398]
        je public_4e62da
        add eax, 0xFFFFFFF8
        jmp public_4e62dc
        public_4e62da : nop
        xor eax, eax
        public_4e62dc : nop
        cmp eax, esi
        je public_4e656a
        test esi, esi
        je public_4e62ed
        add esi, 8
        jmp public_4e62ef
        public_4e62ed : nop
        xor esi, esi
        public_4e62ef : nop
        cmp esi, dword ptr ds : [edi]
        je public_4e62fc
        push esi
        mov ecx, edi
        call dword ptr ds : [public_5c62a8]
        public_4e62fc : nop
        mov edx, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [edx+0x40]
        mov eax, dword ptr ds : [edi]
        test eax, eax
        je public_4e655f
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_4e655f
        mov eax, dword ptr ds : [edi]
        test eax, eax
        je public_4e63d8
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_4e63d8
        mov ecx, dword ptr ds : [edi]
        test ecx, ecx
        je public_4e6339
        add ecx, 0xFFFFFFF8
        jmp public_4e633b
        public_4e6339 : nop
        xor ecx, ecx
        public_4e633b : nop
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x10]
        mov ecx, dword ptr ds : [edi]
        test ecx, ecx
        je public_4e634b
        add ecx, 0xFFFFFFF8
        jmp public_4e634d
        public_4e634b : nop
        xor ecx, ecx
        public_4e634d : nop
        mov edx, dword ptr ds : [ecx]
        push 0
        push eax
        call dword ptr ds : [edx+0x1C]
        push eax
        lea ecx, ss:[esp+0x4C]
        call public_4e65d0
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x44]
        lea esi, ss:[ebp+0x38C]
        call public_4e6580
        mov edx, dword ptr ds : [eax]
        mov ecx, esi
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        push esi
        lea ecx, ss:[esp+0x44]
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        call public_423b60
        add esp, 0xC
        lea ecx, ss:[esp+0x14]
        call public_410190
        fstp dword ptr ss : [ebp+0x388]
        fld dword ptr ss : [esp+0x40]
        fsub dword ptr ss : [esp+0x4C]
        fld dword ptr ss : [esp+0x48]
        fsub dword ptr ss : [esp+0x54]
        fstp dword ptr ss : [esp+0x68]
        fcom dword ptr ss : [esp+0x68]
        fnstsw ax
        test ah, 0x41
        je public_4e63cc
        fstp st(0)
        fld dword ptr ss : [esp+0x68]
        public_4e63cc : nop
        fmul qword ptr ds : [public_5c75e8]
        fstp dword ptr ss : [ebp+0x388]
        public_4e63d8 : nop
        push ebx
        mov ebx, dword ptr ds : [public_679bb4]
        xor eax, eax
        mov al, bl
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x6C], eax
        fild dword ptr ss : [esp+0x6C]
        fmul dword ptr ds : [public_5d8e80]
        call public_5b7ec0
        test eax, eax
        mov dword ptr ss : [esp+0x6C], eax
        jge public_4e640c
        mov dword ptr ss : [esp+0x6C], 0
        jmp public_4e641b
        public_4e640c : nop
        cmp eax, 0xFF
        jle public_4e641b
        mov dword ptr ss : [esp+0x6C], 0xFF
        public_4e641b : nop
        xor ecx, ecx
        mov cl, bh
        mov dword ptr ss : [esp+0x10], ecx
        fild dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [public_5d8e80]
        call public_5b7ec0
        push eax
        call public_4104c0
        movzx edx, byte ptr ss : [esp+0x1A]
        mov dword ptr ss : [esp+0x14], edx
        mov bl, al
        fild dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [public_5d8e80]
        call public_5b7ec0
        push eax
        call public_4104c0
        mov byte ptr ss : [esp+0x1A], al
        movzx eax, byte ptr ss : [esp+0x1F]
        mov dword ptr ss : [esp+0x1C], eax
        fild dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [public_5d8e80]
        call public_5b7ec0
        push eax
        call public_4104c0
        mov byte ptr ss : [esp+0x1F], al
        mov eax, dword ptr ds : [edi]
        xor edi, edi
        add esp, 0xC
        cmp eax, edi
        je public_4e648e
        lea ecx, ds:[eax-8]
        jmp public_4e6490
        public_4e648e : nop
        xor ecx, ecx
        public_4e6490 : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x1C]
        mov cl, byte ptr ss : [esp+0x6C]
        mov esi, eax
        mov al, byte ptr ss : [esp+0x6C]
        mov byte ptr ss : [esp+0x31], cl
        lea ecx, ss:[esp+0x30]
        mov byte ptr ss : [esp+0x30], al
        mov byte ptr ss : [esp+0x3C], 0
        call public_4e7f60
        lea edx, ss:[esp+0x30]
        push edx
        push 3
        push esi
        mov dword ptr ss : [esp+0x70], edi
        call public_402580
        movzx eax, byte ptr ss : [esp+0x1F]
        movzx ecx, byte ptr ss : [esp+0x78]
        shl eax, 8
        xor edx, edx
        or eax, ecx
        movzx ecx, byte ptr ss : [esp+0x1E]
        mov dl, bl
        shl eax, 8
        add esp, 0xC
        or eax, edx
        shl eax, 8
        or eax, ecx
        push eax
        push esi
        lea ecx, ss:[ebp+0x3A0]
        call public_405b10
        lea edx, ss:[esp+0x30]
        push edx
        push esi
        call public_402720
        add esp, 8
        mov ecx, ebp
        call public_4e6160
        mov eax, dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea eax, ss:[esp+0x74]
        push eax
        lea ecx, ss:[esp+0x3C]
        mov dword ptr ss : [esp+0x70], 0xFFFFFFFF
        call public_4e7e70
        mov ecx, dword ptr ss : [esp+0x34]
        push ecx
        call public_5b7e1d
        mov edx, dword ptr ss : [esp+0x3C]
        push edx
        mov dword ptr ss : [esp+0x3C], edi
        mov dword ptr ss : [esp+0x48], edi
        call public_5b7e1d
        add esp, 8
        pop ebx
        pop edi
        pop esi
        pop ebp
        mov ecx, dword ptr ss : [esp+0x4C]
        mov dword ptr fs : [0], ecx
        add esp, 0x58
        ret 4
        public_4e655f : nop
        lea ecx, ss:[ebp+0x3A0]
        call public_4058e0
        public_4e656a : nop
        mov ecx, dword ptr ss : [esp+0x58]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x58
        ret 4
        UNREACHABLE_TRAP(0x4e6270)
    }
}

#undef public_4e62c3
#undef public_4e62c5
#undef public_4e62da
#undef public_4e62dc
#undef public_4e62ed
#undef public_4e62ef
#undef public_4e62fc
#undef public_4e6339
#undef public_4e633b
#undef public_4e634b
#undef public_4e634d
#undef public_4e63cc
#undef public_4e63d8
#undef public_4e640c
#undef public_4e641b
#undef public_4e648e
#undef public_4e6490
#undef public_4e655f
#undef public_4e656a
