#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41fd90);
CLANG_FORWARD_PROC_SYMBOL(public_4207b0);
CLANG_FORWARD_PROC_SYMBOL(public_42d670);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_41fdf3 _public_41fdf3
#define public_41fe1c _public_41fe1c
#define public_41fe57 _public_41fe57
#define public_41fe80 _public_41fe80
#define public_41fead _public_41fead
#define public_41fede _public_41fede
#define public_41fef2 _public_41fef2
#define public_41ff27 _public_41ff27
#define public_41ff2b _public_41ff2b
#define public_41ff47 _public_41ff47
#define public_41ff98 _public_41ff98
#define public_41ff9e _public_41ff9e
#define public_41ffa8 _public_41ffa8
#define public_420008 _public_420008
#define public_42001d _public_42001d
#define public_420036 _public_420036
#define public_420051 _public_420051

PROC_DECLARE(0x41fd90, internal_41fd90, public_41fd90);
extern "C" NAKED register_t __cdecl internal_41fd90()
{
    __asm
    {
        sub esp, 0x58
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0x10]
        mov ecx, dword ptr ds : [eax]
        lea esi, ds:[edi+0x2C]
        push esi
        push 0x14
        push eax
        call dword ptr ds : [ecx+0x24]
        test eax, eax
        setge al
        test al, al
        mov byte ptr ss : [esp+0xB], al
        je public_420051
        fild dword ptr ds : [public_610850]
        mov al, byte ptr ds : [edi+0x14]
        mov esi, dword ptr ds : [esi]
        push ebx
        fmul qword ptr ds : [public_5c9680]
        mov bl, 2
        test bl, al
        push ebp
        fmul dword ptr ds : [public_6107d0]
        mov dword ptr ss : [esp+0x18], esi
        je public_41fdf3
        sub esi, dword ptr ds : [edi+0x18]
        mov dword ptr ss : [esp+0x18], esi
        fild dword ptr ss : [esp+0x18]
        fmul st, st(1)
        call public_5b7ec0
        mov dword ptr ds : [public_616840], eax
        jmp public_41fe1c
        public_41fdf3 : nop
        fimul dword ptr ss : [esp+0x18]
        fadd dword ptr ds : [edi+0x64]
        fld st(0)
        call public_5b7ec0
        mov dword ptr ss : [esp+0x18], eax
        fild dword ptr ss : [esp+0x18]
        fsubr st, st(1)
        fstp dword ptr ds : [edi+0x64]
        mov ecx, dword ptr ds : [public_616840]
        add ecx, eax
        mov dword ptr ds : [public_616840], ecx
        public_41fe1c : nop
        mov cl, byte ptr ds : [edi+0x14]
        fstp st(0)
        test bl, cl
        fild dword ptr ds : [public_610850]
        mov eax, dword ptr ds : [edi+0x30]
        mov dword ptr ss : [esp+0x18], eax
        fmul qword ptr ds : [public_5c9680]
        fmul dword ptr ds : [public_6107d0]
        je public_41fe57
        sub eax, dword ptr ds : [edi+0x1C]
        mov dword ptr ss : [esp+0x18], eax
        fild dword ptr ss : [esp+0x18]
        fmul st, st(1)
        call public_5b7ec0
        mov dword ptr ds : [public_616844], eax
        jmp public_41fe80
        public_41fe57 : nop
        fimul dword ptr ss : [esp+0x18]
        fadd dword ptr ds : [edi+0x68]
        fld st(0)
        call public_5b7ec0
        mov dword ptr ss : [esp+0x18], eax
        fild dword ptr ss : [esp+0x18]
        fsubr st, st(1)
        fstp dword ptr ds : [edi+0x68]
        mov ecx, dword ptr ds : [public_616844]
        add ecx, eax
        mov dword ptr ds : [public_616844], ecx
        public_41fe80 : nop
        mov cl, byte ptr ds : [edi+0x14]
        fstp st(0)
        test bl, cl
        mov eax, dword ptr ds : [edi+0x34]
        mov dword ptr ss : [esp+0x18], eax
        je public_41fead
        sub eax, dword ptr ds : [edi+0x20]
        mov dword ptr ss : [esp+0x18], eax
        fild dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [public_5c967c]
        call public_5b7ec0
        mov dword ptr ds : [public_616848], eax
        jmp public_41fede
        public_41fead : nop
        fild dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [public_5c967c]
        fadd dword ptr ds : [edi+0x6C]
        fld st(0)
        call public_5b7ec0
        mov dword ptr ss : [esp+0x18], eax
        fild dword ptr ss : [esp+0x18]
        fsubr st, st(1)
        fstp dword ptr ds : [edi+0x6C]
        mov ecx, dword ptr ds : [public_616848]
        add ecx, eax
        fstp st(0)
        mov dword ptr ds : [public_616848], ecx
        public_41fede : nop
        call public_42d670
        mov ebp, eax
        lea edx, ds:[edi+0x44]
        mov dword ptr ss : [esp+0x18], ebp
        xor esi, esi
        mov dword ptr ss : [esp+0x14], edx
        public_41fef2 : nop
        mov dl, byte ptr ds : [edi+esi+0x38]
        mov ecx, esi
        mov eax, 1
        shl eax, cl
        mov ecx, dword ptr ds : [public_616850]
        shr dl, 7
        mov byte ptr ss : [esp+0x12], dl
        test eax, ecx
        setne cl
        cmp dl, cl
        je public_420036
        test dl, dl
        mov ecx, dword ptr ds : [public_616850]
        je public_41ff27
        or ecx, eax
        jmp public_41ff2b
        public_41ff27 : nop
        not eax
        and ecx, eax
        public_41ff2b : nop
        xor al, al
        test dl, dl
        mov dword ptr ds : [public_616850], ecx
        je public_41ffa8
        mov eax, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [eax]
        xor edx, edx
        cmp ebp, eax
        jbe public_41ff47
        mov edx, ebp
        sub edx, eax
        public_41ff47 : nop
        mov ebp, dword ptr ds : [public_616840]
        mov ecx, dword ptr ds : [public_6107d4]
        mov ebx, dword ptr ds : [public_616844]
        mov eax, ebp
        sub eax, ecx
        mov ecx, ebx
        sub ecx, dword ptr ds : [public_6107d8]
        mov dword ptr ds : [public_6107d4], ebp
        mov dword ptr ds : [public_6107d8], ebx
        mov ebx, dword ptr ds : [edi+0x40]
        cmp edx, ebx
        jae public_41ff98
        cdq 
        xor eax, edx
        sub eax, edx
        cmp eax, 4
        jg public_41ff98
        mov eax, ecx
        cdq 
        xor eax, edx
        sub eax, edx
        cmp eax, 4
        jg public_41ff98
        mov ecx, dword ptr ss : [esp+0x18]
        mov al, 1
        sub ecx, ebx
        jmp public_41ff9e
        public_41ff98 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        xor al, al
        public_41ff9e : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edx], ecx
        mov dl, byte ptr ss : [esp+0x12]
        public_41ffa8 : nop
        cmp esi, 9
        mov byte ptr ss : [esp+0x60], 0
        mov dword ptr ss : [esp+0x64], esi
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFE
        mov dword ptr ss : [esp+0x28], 0xFFFFFFFD
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFC
        mov dword ptr ss : [esp+0x30], 0xFFFFFFFB
        mov dword ptr ss : [esp+0x34], 0xFFFFFFFA
        mov dword ptr ss : [esp+0x38], 0xFFFFFFF9
        mov dword ptr ss : [esp+0x3C], 0xFFFFFFF8
        mov dword ptr ss : [esp+0x40], 0xFFFFFFF7
        jb public_420008
        mov dword ptr ss : [esp+0x48], 0
        jmp public_42001d
        public_420008 : nop
        mov ecx, dword ptr ss : [esp+esi*4+0x20]
        mov dword ptr ss : [esp+0x48], ecx
        mov byte ptr ss : [esp+0x5C], dl
        mov byte ptr ss : [esp+0x5D], 0
        mov byte ptr ss : [esp+0x5E], al
        public_42001d : nop
        mov eax, dword ptr ds : [edi+4]
        lea edx, ss:[esp+0x44]
        push edx
        push eax
        lea eax, ss:[esp+0x24]
        push eax
        mov ecx, edi
        call public_4207b0
        mov ebp, dword ptr ss : [esp+0x18]
        public_420036 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        inc esi
        add ecx, 4
        cmp esi, 8
        mov dword ptr ss : [esp+0x14], ecx
        jl public_41fef2
        mov al, byte ptr ss : [esp+0x13]
        pop ebp
        pop ebx
        public_420051 : nop
        pop edi
        pop esi
        add esp, 0x58
        ret 
        UNREACHABLE_TRAP(0x41fd90)
    }
}

#undef public_41fdf3
#undef public_41fe1c
#undef public_41fe57
#undef public_41fe80
#undef public_41fead
#undef public_41fede
#undef public_41fef2
#undef public_41ff27
#undef public_41ff2b
#undef public_41ff47
#undef public_41ff98
#undef public_41ff9e
#undef public_41ffa8
#undef public_420008
#undef public_42001d
#undef public_420036
#undef public_420051
