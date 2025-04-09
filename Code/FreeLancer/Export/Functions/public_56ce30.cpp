#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42d680);
CLANG_FORWARD_PROC_SYMBOL(public_564570);
CLANG_FORWARD_PROC_SYMBOL(public_579280);
CLANG_FORWARD_PROC_SYMBOL(public_579290);
CLANG_FORWARD_PROC_SYMBOL(public_5a1f20);

#define public_56ce50 _public_56ce50
#define public_56ce60 _public_56ce60
#define public_56ce65 _public_56ce65
#define public_56ce6b _public_56ce6b
#define public_56ce87 _public_56ce87
#define public_56ce8e _public_56ce8e
#define public_56cea1 _public_56cea1
#define public_56ceba _public_56ceba
#define public_56cef9 _public_56cef9
#define public_56cf1c _public_56cf1c
#define public_56cf55 _public_56cf55
#define public_56cf65 _public_56cf65
#define public_56d046 _public_56d046
#define public_56d049 _public_56d049
#define public_56d0b5 _public_56d0b5
#define public_56d0f9 _public_56d0f9
#define public_56d136 _public_56d136
#define public_56d13e _public_56d13e
#define public_56d166 _public_56d166
#define public_56d19f _public_56d19f
#define public_56d1af _public_56d1af
#define public_56d1e0 _public_56d1e0
#define public_56d20c _public_56d20c
#define public_56d213 _public_56d213
#define public_56d229 _public_56d229
#define public_56d283 _public_56d283
#define public_56d2f9 _public_56d2f9

PROC_DECLARE(0x56ce30, internal_56ce30, public_56ce30);
extern "C" NAKED register_t __cdecl internal_56ce30()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x220
        push ebx
        push ebp
        mov ebp, ecx
        mov ecx, dword ptr ss : [ebp+0xC]
        test ecx, ecx
        push esi
        push edi
        je public_56ce6b
        lea esp, ss:[esp]
        public_56ce50 : nop
        test byte ptr ds : [ecx+0x6C], 1
        mov esi, dword ptr ds : [ecx+8]
        je public_56ce60
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x2C]
        jmp public_56ce65
        public_56ce60 : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x30]
        public_56ce65 : nop
        test esi, esi
        mov ecx, esi
        jne public_56ce50
        public_56ce6b : nop
        mov edx, dword ptr ss : [ebp+0xD8]
        mov ecx, dword ptr ds : [edx+0x7C]
        mov esi, dword ptr ss : [ebp+0xDC]
        mov esi, dword ptr ds : [esi+0x7C]
        or eax, 0xFFFFFFFF
        cmp ecx, 0xFFFFFFFF
        je public_56ce87
        mov eax, ecx
        public_56ce87 : nop
        cmp esi, 0xFFFFFFFF
        je public_56ce8e
        mov eax, esi
        public_56ce8e : nop
        cmp eax, 0xFFFFFFFF
        jl public_56cea1
        cmp eax, dword ptr ds : [edx+0x8A4]
        jge public_56cea1
        mov dword ptr ds : [edx+0x80], eax
        public_56cea1 : nop
        cmp eax, 0xFFFFFFFF
        mov ecx, dword ptr ss : [ebp+0xDC]
        jl public_56ceba
        cmp eax, dword ptr ds : [ecx+0x8A4]
        jge public_56ceba
        mov dword ptr ds : [ecx+0x80], eax
        public_56ceba : nop
        fld qword ptr ss : [ebp+0x108]
        fcomp qword ptr ds : [public_5c89b8]
        fnstsw ax
        mov al, byte ptr ss : [ebp+0x110]
        test ah, 5
        jp public_56d136
        test al, al
        jne public_56d13e
        call public_42d680
        fcom qword ptr ds : [public_5c75e8]
        fnstsw ax
        test ah, 0x41
        jne public_56cef9
        fstp st(0)
        fld qword ptr ds : [public_5c75e8]
        public_56cef9 : nop
        fmul qword ptr ds : [public_5e2a58]
        mov edi, 2
        lea ebx, ss:[ebp+0xF4]
        mov dword ptr ss : [esp+0x20], edi
        fadd qword ptr ss : [ebp+0x108]
        mov esi, ebx
        fstp qword ptr ss : [ebp+0x108]
        public_56cf1c : nop
        fld dword ptr ds : [public_5c7474]
        mov ecx, dword ptr ds : [esi]
        fild dword ptr ss : [esp+0x20]
        fmul qword ptr ds : [public_5c7720]
        fadd qword ptr ss : [ebp+0x108]
        fcom qword ptr ds : [public_5c8ba8]
        fnstsw ax
        test ah, 0x41
        jne public_56cf55
        fstp st(0)
        lea edx, ss:[esp+0x24]
        fst dword ptr ss : [esp+0x24]
        fst dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp+0x2C]
        jmp public_56cf65
        public_56cf55 : nop
        fstp dword ptr ss : [esp+0x14]
        lea edx, ss:[esp+0x14]
        fst dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp+0x1C]
        public_56cf65 : nop
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x14]
        add esi, 4
        dec edi
        cmp edi, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x20], edi
        jg public_56cf1c
        fld qword ptr ss : [ebp+0x108]
        mov ecx, dword ptr ss : [ebp+0x100]
        fcomp qword ptr ds : [public_5c8ba8]
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x18], 0
        fnstsw ax
        test ah, 0x41
        jne public_56d0b5
        lea edx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x14], 0
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x14]
        mov ecx, dword ptr ss : [ebp+0x104]
        lea edx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x1C], 0
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x14]
        mov ecx, dword ptr ss : [ebp+0xB8]
        mov dl, byte ptr ds : [ecx+0x6C]
        mov al, 3
        or dl, al
        mov byte ptr ds : [ecx+0x6C], dl
        mov ecx, dword ptr ss : [ebp+0xBC]
        or byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ss : [ebp+0xC0]
        or byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ss : [ebp+0xC4]
        or byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ss : [ebp+0xC8]
        or byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ss : [ebp+0xCC]
        or byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ss : [ebp+0xD0]
        or byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ss : [ebp+0xD8]
        mov ecx, dword ptr ds : [ecx+0x8A4]
        sub ecx, 0x14
        cmp ecx, 1
        mov ecx, dword ptr ss : [ebp+0xD4]
        mov dl, 0xFC
        jge public_56d046
        and byte ptr ds : [ecx+0x6C], dl
        jmp public_56d049
        public_56d046 : nop
        or byte ptr ds : [ecx+0x6C], al
        public_56d049 : nop
        mov ecx, dword ptr ss : [ebp+0xD8]
        or byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ss : [ebp+0xDC]
        or byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ss : [ebp+0xE0]
        or byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ss : [ebp+0xE4]
        or byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ss : [ebp+0xE8]
        or byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ss : [ebp+0xEC]
        or byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ss : [ebp+0xF0]
        or byte ptr ds : [ecx+0x6C], al
        mov eax, dword ptr ds : [ebx]
        and byte ptr ds : [eax+0x6C], dl
        mov eax, dword ptr ss : [ebp+0xF8]
        and byte ptr ds : [eax+0x6C], dl
        mov eax, dword ptr ss : [ebp+0xFC]
        and byte ptr ds : [eax+0x6C], dl
        mov dword ptr ss : [ebp+0x108], 0
        mov dword ptr ss : [ebp+0x10C], 0x40000000
        jmp public_56d0f9
        public_56d0b5 : nop
        fld qword ptr ss : [ebp+0x108]
        lea eax, ss:[esp+0x14]
        fmul qword ptr ds : [public_5e2bb0]
        push eax
        fstp dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x14]
        fld qword ptr ss : [ebp+0x108]
        mov ecx, dword ptr ss : [ebp+0x104]
        lea eax, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x14], 0
        fstp dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x1C], 0
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x14]
        public_56d0f9 : nop
        fld qword ptr ss : [ebp+0x108]
        fcomp qword ptr ds : [public_5e2a50]
        fnstsw ax
        test ah, 0x41
        jne public_56d283
        fld qword ptr ss : [ebp+0x108]
        fcomp qword ptr ds : [public_5d5070]
        fnstsw ax
        test ah, 5
        jp public_56d283
        push 0x1B
        call public_564570
        add esp, 4
        jmp public_56d283
        public_56d136 : nop
        test al, al
        je public_56d283
        public_56d13e : nop
        call public_42d680
        fmul qword ptr ds : [public_5d3c48]
        mov edi, 2
        lea ebx, ss:[ebp+0xF4]
        fsubr qword ptr ss : [ebp+0x108]
        mov dword ptr ss : [esp+0x20], edi
        mov esi, ebx
        fstp qword ptr ss : [ebp+0x108]
        public_56d166 : nop
        fld dword ptr ds : [public_5c7474]
        mov ecx, dword ptr ds : [esi]
        fild dword ptr ss : [esp+0x20]
        fmul qword ptr ds : [public_5c7720]
        fadd qword ptr ss : [ebp+0x108]
        fcom qword ptr ds : [public_5c8ba8]
        fnstsw ax
        test ah, 0x41
        jne public_56d19f
        fstp st(0)
        lea eax, ss:[esp+0x14]
        fst dword ptr ss : [esp+0x14]
        fst dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp+0x1C]
        jmp public_56d1af
        public_56d19f : nop
        fstp dword ptr ss : [esp+0x24]
        lea eax, ss:[esp+0x24]
        fst dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp+0x2C]
        public_56d1af : nop
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x14]
        add esi, 4
        dec edi
        cmp edi, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x20], edi
        jg public_56d166
        fld qword ptr ss : [ebp+0x108]
        fcomp qword ptr ds : [public_5e2a50]
        fnstsw ax
        test ah, 5
        jp public_56d229
        mov ecx, ebx
        mov esi, 3
        mov dl, 0xFC
        mov edi, edi
        public_56d1e0 : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x6C]
        and bl, dl
        add ecx, 4
        dec esi
        mov byte ptr ds : [eax+0x6C], bl
        jne public_56d1e0
        mov eax, dword ptr ss : [ebp+0x114]
        dec eax
        mov byte ptr ss : [ebp+0x110], 0
        je public_56d20c
        mov dword ptr ss : [ebp+0xB4], 1
        jmp public_56d213
        public_56d20c : nop
        mov byte ptr ss : [ebp+0x368], 1
        public_56d213 : nop
        mov dword ptr ss : [ebp+0x108], 0
        mov dword ptr ss : [ebp+0x10C], 0xC0000000
        jmp public_56d283
        public_56d229 : nop
        fld qword ptr ss : [ebp+0x108]
        mov ecx, dword ptr ss : [ebp+0x100]
        fmul qword ptr ds : [public_5e2bb0]
        lea eax, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x1C], 0
        fstp dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x14]
        fld qword ptr ss : [ebp+0x108]
        mov ecx, dword ptr ss : [ebp+0x104]
        lea eax, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x14], 0
        fstp dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x1C], 0
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x14]
        public_56d283 : nop
        mov al, byte ptr ss : [ebp+0x369]
        test al, al
        je public_56d2f9
        mov al, byte ptr ss : [ebp+0x319]
        test al, al
        mov byte ptr ss : [ebp+0x369], 0
        mov byte ptr ss : [ebp+0x368], 0
        jne public_56d2f9
        push 1
        call public_579280
        add esp, 4
        call public_579290
        mov ecx, dword ptr ss : [ebp+0xD8]
        mov eax, dword ptr ds : [ecx+0x8AC]
        push eax
        call public_5a1f20
        test eax, eax
        je public_56d2f9
        mov esi, eax
        mov byte ptr ss : [ebp+0x319], 1
        mov ecx, 0x80
        lea edi, ss:[esp+0x30]
        rep movsd
        lea ecx, ss:[esp+0x30]
        push ecx
        lea ecx, ss:[ebp+0x118]
        call dword ptr ds : [public_5c63cc]
        mov dword ptr ss : [ebp+0xB4], 0xC
        public_56d2f9 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x56ce30)
    }
}

#undef public_56ce50
#undef public_56ce60
#undef public_56ce65
#undef public_56ce6b
#undef public_56ce87
#undef public_56ce8e
#undef public_56cea1
#undef public_56ceba
#undef public_56cef9
#undef public_56cf1c
#undef public_56cf55
#undef public_56cf65
#undef public_56d046
#undef public_56d049
#undef public_56d0b5
#undef public_56d0f9
#undef public_56d136
#undef public_56d13e
#undef public_56d166
#undef public_56d19f
#undef public_56d1af
#undef public_56d1e0
#undef public_56d20c
#undef public_56d213
#undef public_56d229
#undef public_56d283
#undef public_56d2f9
