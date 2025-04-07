#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6f04cb0);
CLANG_FORWARD_PROC_SYMBOL(public_6f05630);
CLANG_FORWARD_PROC_SYMBOL(public_6f05660);
CLANG_FORWARD_PROC_SYMBOL(public_6f056a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f46900);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f04cd0 _public_6f04cd0
#define public_6f04d20 _public_6f04d20
#define public_6f04d4b _public_6f04d4b
#define public_6f04da1 _public_6f04da1
#define public_6f04db1 _public_6f04db1
#define public_6f04e1e _public_6f04e1e
#define public_6f04e23 _public_6f04e23
#define public_6f04e2b _public_6f04e2b
#define public_6f04e40 _public_6f04e40
#define public_6f04e4d _public_6f04e4d
#define public_6f04e70 _public_6f04e70
#define public_6f04e84 _public_6f04e84
#define public_6f04efe _public_6f04efe
#define public_6f04f68 _public_6f04f68
#define public_6f04f7e _public_6f04f7e
#define public_6f04fa0 _public_6f04fa0
#define public_6f04fb5 _public_6f04fb5
#define public_6f04fc0 _public_6f04fc0
#define public_6f04fd4 _public_6f04fd4
#define public_6f04fdc _public_6f04fdc
#define public_6f04fe1 _public_6f04fe1
#define public_6f04ff4 _public_6f04ff4

PROC_DECLARE(0x6f04cb0, internal_6f04cb0, public_6f04cb0);
extern "C" NAKED register_t __cdecl internal_6f04cb0()
{
    __asm
    {
        sub esp, 0x20
        push ebp
        mov ebp, dword ptr ss : [esp+0x28]
        mov ecx, ebp
        call dword ptr ds : [public_6fb3024]
        test al, al
        je public_6f04ff4
        push ebx
        push esi
        push edi
        nop 
        lea esp, ss:[esp]
/*FIXUP public_6f04cd0 : nop
        push offset public_6fb8078 @0x6f04cd0*/
  FIXUP public_6f04cd0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8078
        mov ecx, ebp
        call dword ptr ds : [public_6fb301c]
        test al, al
        je public_6f04fe1
        lea ecx, ss:[esp+0x14]
        call dword ptr ds : [public_6fb3030]
        xor edi, edi
        mov ecx, ebp
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x1C], edi
        mov dword ptr ss : [esp+0x20], edi
        mov dword ptr ss : [esp+0x24], edi
        mov dword ptr ss : [esp+0x28], edi
        mov dword ptr ss : [esp+0x2C], edi
        call dword ptr ds : [public_6fb3018]
        test al, al
        je public_6f04db1
        lea ecx, ds:[ecx]
        public_6f04d20 : nop
        mov esi, dword ptr ds : [public_6fb3014]
/*FIXUP push offset public_6fb445c @0x6f04d26*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb445c
        mov ecx, ebp
        call esi
        test al, al
        mov ecx, ebp
        je public_6f04d4b
        call dword ptr ds : [public_6fb3054]
        push eax
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ss : [esp+0x14], eax
        jmp public_6f04da1
/*FIXUP public_6f04d4b : nop
        push offset public_6fb8068 @0x6f04d4b*/
  FIXUP public_6f04d4b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8068
        call esi
        test al, al
        je public_6f04da1
        push edi
        mov ecx, ebp
        call dword ptr ds : [public_6fb3044]
        fmul dword ptr ds : [public_6fb8064]
        mov esi, dword ptr ds : [public_6fb3020]
        push 1
        mov ecx, ebp
        fstp dword ptr ss : [esp+0x1C]
        call esi
        push 2
        mov ecx, ebp
        mov dword ptr ss : [esp+0x20], eax
        call esi
        push 3
        mov ecx, ebp
        mov dword ptr ss : [esp+0x24], eax
        call esi
        push 4
        mov ecx, ebp
        mov dword ptr ss : [esp+0x28], eax
        call esi
        push 5
        mov ecx, ebp
        mov dword ptr ss : [esp+0x2C], eax
        call esi
        mov dword ptr ss : [esp+0x2C], eax
        public_6f04da1 : nop
        mov ecx, ebp
        call dword ptr ds : [public_6fb3018]
        test al, al
        jne public_6f04d20
        public_6f04db1 : nop
        mov ecx, dword ptr ds : [public_6fd05f4]
        mov esi, dword ptr ds : [public_6fd05f8]
        sub esi, ecx
        mov eax, 0x92492493
        imul esi
        add edx, esi
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        mov ebx, ecx
        jae public_6f04efe
        mov edi, dword ptr ds : [public_6fd05f0]
        test edi, edi
        je public_6f04e1e
        mov esi, ecx
        sub esi, edi
        mov eax, 0x92492493
        imul esi
        add edx, esi
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        jbe public_6f04e1e
        mov esi, ecx
        sub esi, edi
        mov eax, 0x92492493
        imul esi
        add edx, esi
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov esi, edx
        jmp public_6f04e23
        public_6f04e1e : nop
        mov esi, 1
        public_6f04e23 : nop
        test edi, edi
        jne public_6f04e2b
        xor edx, edx
        jmp public_6f04e40
        public_6f04e2b : nop
        sub ecx, edi
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 4
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_6f04e40 : nop
        lea eax, ds:[edx+esi]
        test eax, eax
        mov dword ptr ss : [esp+0x34], eax
        jge public_6f04e4d
        xor eax, eax
        public_6f04e4d : nop
        imul eax, 0x1C
        push eax
        call public_6fa912a
        mov esi, dword ptr ds : [public_6fd05f0]
        add esp, 4
        cmp esi, ebx
        mov dword ptr ss : [esp+0x10], eax
        mov edi, eax
        je public_6f04e84
        lea esp, ss:[esp]
        public_6f04e70 : nop
        push esi
        push edi
        call public_6f46900
        add esi, 0x1C
        add esp, 8
        add edi, 0x1C
        cmp esi, ebx
        jne public_6f04e70
        public_6f04e84 : nop
        lea edx, ss:[esp+0x14]
        push edx
        push 1
        push edi
        mov ecx, offset public_6fd05ec
        call public_6f056a0
        mov eax, dword ptr ds : [public_6fd05f4]
        add edi, 0x1C
        push edi
        push eax
        push ebx
        mov ecx, offset public_6fd05ec
        call public_6f05660
        mov ecx, dword ptr ds : [public_6fd05f4]
        mov edx, dword ptr ds : [public_6fd05f0]
        push ecx
        push edx
        mov ecx, offset public_6fd05ec
        call public_6ea1490
        mov eax, dword ptr ds : [public_6fd05f0]
        push eax
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x38]
        mov esi, dword ptr ss : [esp+0x14]
        imul eax, 0x1C
        add eax, esi
        add esp, 4
        mov ecx, offset public_6fd05ec
        mov dword ptr ds : [public_6fd05f8], eax
        call public_6f05630
        inc eax
        imul eax, 0x1C
        add eax, esi
        mov dword ptr ds : [public_6fd05f0], esi
        jmp public_6f04fdc
        public_6f04efe : nop
        mov esi, ecx
        sub esi, ebx
        mov eax, 0x92492493
        imul esi
        add edx, esi
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        jae public_6f04f7e
        lea edx, ds:[ebx+0x1C]
        push edx
        push ecx
        push ebx
        mov ecx, offset public_6fd05ec
        call public_6f05660
        mov esi, dword ptr ds : [public_6fd05f4]
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        sub ecx, ebx
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 4
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        mov eax, 1
        sub eax, edx
        push eax
        push esi
        mov ecx, offset public_6fd05ec
        call public_6f056a0
        mov eax, dword ptr ds : [public_6fd05f4]
        cmp ebx, eax
        je public_6f04fd4
        public_6f04f68 : nop
        mov edi, ebx
        add ebx, 0x1C
        cmp ebx, eax
        mov ecx, 7
        lea esi, ss:[esp+0x14]
        rep movsd
        jne public_6f04f68
        jmp public_6f04fd4
        public_6f04f7e : nop
        push ecx
        push ecx
        add ecx, 0xFFFFFFE4
        push ecx
        mov ecx, offset public_6fd05ec
        call public_6f05660
        mov eax, dword ptr ds : [public_6fd05f4]
        mov edx, eax
        add eax, 0xFFFFFFE4
        cmp ebx, eax
        je public_6f04fb5
        lea esp, ss:[esp]
        public_6f04fa0 : nop
        sub eax, 0x1C
        sub edx, 0x1C
        cmp eax, ebx
        mov ecx, 7
        mov esi, eax
        mov edi, edx
        rep movsd
        jne public_6f04fa0
        public_6f04fb5 : nop
        lea eax, ds:[ebx+0x1C]
        cmp ebx, eax
        je public_6f04fd4
        lea esp, ss:[esp]
        public_6f04fc0 : nop
        mov edi, ebx
        add ebx, 0x1C
        cmp ebx, eax
        mov ecx, 7
        lea esi, ss:[esp+0x14]
        rep movsd
        jne public_6f04fc0
        public_6f04fd4 : nop
        mov eax, dword ptr ds : [public_6fd05f4]
        add eax, 0x1C
        public_6f04fdc : nop
        mov dword ptr ds : [public_6fd05f4], eax
        public_6f04fe1 : nop
        mov ecx, ebp
        call dword ptr ds : [public_6fb3024]
        test al, al
        jne public_6f04cd0
        pop edi
        pop esi
        pop ebx
        public_6f04ff4 : nop
        pop ebp
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x6f04cb0)
    }
}

#undef public_6f04cd0
#undef public_6f04d20
#undef public_6f04d4b
#undef public_6f04da1
#undef public_6f04db1
#undef public_6f04e1e
#undef public_6f04e23
#undef public_6f04e2b
#undef public_6f04e40
#undef public_6f04e4d
#undef public_6f04e70
#undef public_6f04e84
#undef public_6f04efe
#undef public_6f04f68
#undef public_6f04f7e
#undef public_6f04fa0
#undef public_6f04fb5
#undef public_6f04fc0
#undef public_6f04fd4
#undef public_6f04fdc
#undef public_6f04fe1
#undef public_6f04ff4
