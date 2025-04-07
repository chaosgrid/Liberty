#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d3e580);
CLANG_FORWARD_PROC_SYMBOL(public_6d41b00);

#define public_6d2e2be _public_6d2e2be
#define public_6d2e2da _public_6d2e2da
#define public_6d2e320 _public_6d2e320
#define public_6d2e33b _public_6d2e33b
#define public_6d2e378 _public_6d2e378
#define public_6d2e38e _public_6d2e38e
#define public_6d2e393 _public_6d2e393
#define public_6d2e397 _public_6d2e397
#define public_6d2e3c0 _public_6d2e3c0
#define public_6d2e3db _public_6d2e3db
#define public_6d2e3dd _public_6d2e3dd
#define public_6d2e3e1 _public_6d2e3e1
#define public_6d2e3ea _public_6d2e3ea
#define public_6d2e40c _public_6d2e40c
#define public_6d2e411 _public_6d2e411
#define public_6d2e42c _public_6d2e42c

PROC_DECLARE(0x6d2e280, internal_6d2e280, public_6d2e280);
extern "C" NAKED register_t __cdecl internal_6d2e280()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax]
        sub esp, 0x20
        push esi
        cmp dword ptr ds : [edx+0xC], eax
        je public_6d2e42c
        push ebx
        mov bx, word ptr ds : [eax]
        cmp bx, 0xFF
        push ebp
        push edi
        mov edi, dword ptr ds : [ecx+8]
        ja public_6d2e397
        xor eax, eax
        mov al, bl
        mov ecx, eax
        and ecx, 0x8000001F
        jns public_6d2e2be
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d2e2be : nop
        shr eax, 5
        mov edx, 1
        shl edx, cl
        test dword ptr ds : [edi+eax*4+8], edx
        setne al
        movzx eax, al
        test eax, eax
        jne public_6d2e40c
        public_6d2e2da : nop
        mov al, byte ptr ds : [edi+5]
        test al, al
        mov dword ptr ss : [esp+0x34], ebx
        jne public_6d2e393
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
        je public_6d2e33b
        lea ebx, ds:[ebx]
        public_6d2e320 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        xor eax, eax
        mov ax, word ptr ds : [esi+8]
        push eax
        push ecx
        call ebp
        add esp, 8
        test eax, eax
        je public_6d2e33b
        mov esi, dword ptr ds : [esi]
        cmp esi, ebx
        jne public_6d2e320
        public_6d2e33b : nop
        cmp dword ptr ds : [edi+0x40], esi
        jne public_6d2e40c
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
        je public_6d2e38e
        public_6d2e378 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [esi+8]
        push eax
        call dword ptr ss : [esp+0x1C]
        test al, al
        jne public_6d2e38e
        mov esi, dword ptr ds : [esi]
        cmp esi, ebx
        jne public_6d2e378
        public_6d2e38e : nop
        cmp dword ptr ds : [edi+0x4C], esi
        jne public_6d2e40c
        public_6d2e393 : nop
        xor eax, eax
        jmp public_6d2e411
        public_6d2e397 : nop
        mov ecx, dword ptr ds : [edi+0x30]
        test ecx, ecx
        je public_6d2e3ea
        mov eax, dword ptr ds : [edi+0x34]
        sub eax, ecx
        sar eax, 2
        test eax, eax
        je public_6d2e3ea
        mov ebp, dword ptr ds : [edi+0x34]
        mov esi, ecx
        mov ecx, ebp
        sub ecx, esi
        sar ecx, 2
        test ecx, ecx
        jle public_6d2e3e1
        lea ebx, ds:[ebx]
        public_6d2e3c0 : nop
        mov eax, ecx
        cdq 
        sub eax, edx
        sar eax, 1
        cmp word ptr ds : [esi+eax*4+2], bx
        jae public_6d2e3db
        or edx, 0xFFFFFFFF
        sub edx, eax
        lea esi, ds:[esi+eax*4+4]
        add ecx, edx
        jmp public_6d2e3dd
        public_6d2e3db : nop
        mov ecx, eax
        public_6d2e3dd : nop
        test ecx, ecx
        jg public_6d2e3c0
        public_6d2e3e1 : nop
        cmp esi, ebp
        je public_6d2e3ea
        cmp bx, word ptr ds : [esi]
        jae public_6d2e40c
        public_6d2e3ea : nop
        xor eax, eax
        mov ax, word ptr ds : [edi+0x28]
        test ax, ax
        je public_6d2e2da
        push eax
        push ebx
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d2e2da
        public_6d2e40c : nop
        mov eax, 1
        public_6d2e411 : nop
        movzx ecx, byte ptr ds : [edi+4]
        cmp ecx, eax
        pop edi
        pop ebp
        pop ebx
        je public_6d2e42c
        mov eax, dword ptr ss : [esp+0x2C]
        add dword ptr ds : [eax], 2
        mov al, 1
        pop esi
        add esp, 0x20
        ret 8
        public_6d2e42c : nop
        xor al, al
        pop esi
        add esp, 0x20
        ret 8
        UNREACHABLE_TRAP(0x6d2e280)
    }
}

#undef public_6d2e2be
#undef public_6d2e2da
#undef public_6d2e320
#undef public_6d2e33b
#undef public_6d2e378
#undef public_6d2e38e
#undef public_6d2e393
#undef public_6d2e397
#undef public_6d2e3c0
#undef public_6d2e3db
#undef public_6d2e3dd
#undef public_6d2e3e1
#undef public_6d2e3ea
#undef public_6d2e40c
#undef public_6d2e411
#undef public_6d2e42c
