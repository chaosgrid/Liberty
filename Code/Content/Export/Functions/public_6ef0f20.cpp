#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb7810);
CLANG_FORWARD_PROC_SYMBOL(public_6ef0f20);
CLANG_FORWARD_PROC_SYMBOL(public_6ef1240);
CLANG_FORWARD_PROC_SYMBOL(public_6f72cb0);
CLANG_FORWARD_PROC_SYMBOL(public_6f767d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f95e00);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fa0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fac02b);

#define public_6ef0fb6 _public_6ef0fb6
#define public_6ef1099 _public_6ef1099
#define public_6ef10bf _public_6ef10bf
#define public_6ef10cd _public_6ef10cd
#define public_6ef10f1 _public_6ef10f1
#define public_6ef1185 _public_6ef1185
#define public_6ef11a1 _public_6ef11a1
#define public_6ef11b3 _public_6ef11b3
#define public_6ef11bf _public_6ef11bf
#define public_6ef11fe _public_6ef11fe
#define public_6ef1200 _public_6ef1200
#define public_6ef121d _public_6ef121d
#define public_6ef1228 _public_6ef1228

PROC_DECLARE(0x6ef0f20, internal_6ef0f20, public_6ef0f20);
extern "C" NAKED register_t __cdecl internal_6ef0f20()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fac02b @0x6ef0f22*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fac02b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x468
        fld dword ptr ss : [esp+0x484]
        mov dword ptr ss : [esp+0x20], ecx
        fcomp dword ptr ds : [public_6fb7614]
        fnstsw ax
        test ah, 0x41
        jne public_6ef1228
        mov al, byte ptr ss : [esp+7]
        mov byte ptr ss : [esp+0x3C], al
        xor eax, eax
        push ebx
        push ebp
        mov dword ptr ss : [esp+0x48], eax
        mov dword ptr ss : [esp+0x4C], eax
        mov dword ptr ss : [esp+0x50], eax
        fld dword ptr ds : [public_6fb7608]
        fmul dword ptr ss : [esp+0x48C]
        mov ebx, dword ptr ss : [esp+0x488]
        mov ebp, dword ptr ss : [esp+0x484]
        lea ecx, ss:[esp+0x44]
        push ecx
        push ecx
        fstp dword ptr ss : [esp]
        push ebx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x484], eax
        call public_6f767d0
        mov eax, dword ptr ss : [esp+0x48]
        cmp eax, dword ptr ss : [esp+0x4C]
        mov dword ptr ss : [esp+0x10], eax
        je public_6ef121d
        push esi
        push edi
        public_6ef0fb6 : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [edx]
        fld dword ptr ds : [eax+0x18]
        lea esi, ds:[eax+0x10]
        fsub dword ptr ds : [eax+0x24]
        lea edi, ds:[eax+0x1C]
        sub esp, 0xC
        lea ecx, ss:[esp+0x78]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [esi+4]
        fsub dword ptr ds : [edi+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi]
        fsub dword ptr ds : [edi]
        fstp dword ptr ss : [esp]
        call public_6eb7810
        fld dword ptr ds : [esi+8]
        sub esp, 0xC
        fsub dword ptr ds : [ebx+8]
        lea ecx, ss:[esp+0x40]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [esi+4]
        fsub dword ptr ds : [ebx+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi]
        fsub dword ptr ds : [ebx]
        fstp dword ptr ss : [esp]
        call public_6eb7810
        fld dword ptr ss : [esp+0x3C]
        sub esp, 0xC
        fmul dword ptr ss : [esp+0x48]
        lea ecx, ss:[esp+0x4C]
        fld dword ptr ss : [esp+0x44]
        fmul dword ptr ss : [esp+0x44]
        faddp 
        fld dword ptr ss : [esp+0x40]
        fmul dword ptr ss : [esp+0x40]
        faddp 
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [edi+8]
        fsub dword ptr ds : [ebx+8]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [edi+4]
        fsub dword ptr ds : [ebx+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [edi]
        fsub dword ptr ds : [ebx]
        fstp dword ptr ss : [esp]
        call public_6eb7810
        fld dword ptr ss : [esp+0x48]
        fmul dword ptr ss : [esp+0x48]
        fld dword ptr ss : [esp+0x44]
        fmul dword ptr ss : [esp+0x44]
        faddp 
        fld dword ptr ss : [esp+0x40]
        fmul dword ptr ss : [esp+0x40]
        faddp 
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ss : [esp+0x20]
        fnstsw ax
        test ah, 5
        mov eax, dword ptr ds : [public_6fcf250]
        jp public_6ef10bf
        test eax, eax
        jne public_6ef1099
        call public_6fa8fa0
        mov dword ptr ds : [public_6fcf250], eax
        public_6ef1099 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        push edx
        lea edx, ss:[esp+0x64]
        push edx
        push eax
        call dword ptr ds : [ecx+0x64]
        fld dword ptr ss : [esp+0x60]
        mov eax, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x24], eax
        mov ecx, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0x28], ecx
        mov edx, dword ptr ds : [edi+8]
        jmp public_6ef10f1
        public_6ef10bf : nop
        test eax, eax
        jne public_6ef10cd
        call public_6fa8fa0
        mov dword ptr ds : [public_6fcf250], eax
        public_6ef10cd : nop
        mov edx, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [eax]
        push edx
        lea edx, ss:[esp+0x60]
        push edx
        push eax
        call dword ptr ds : [ecx+0x64]
        fld dword ptr ss : [esp+0x5C]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x24], eax
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x28], ecx
        mov edx, dword ptr ds : [esi+8]
        public_6ef10f1 : nop
        fcom dword ptr ds : [public_6fb444c]
        mov dword ptr ss : [esp+0x2C], edx
        fnstsw ax
        test ah, 0x41
        jne public_6ef11fe
        fld dword ptr ss : [esp+0x494]
        fxch 
        fdiv dword ptr ds : [public_6fb7608]
        fsubp 
        fsub dword ptr ds : [public_6fb7614]
        fcom dword ptr ds : [public_6fb444c]
        fnstsw ax
        test ah, 0x41
        jne public_6ef11fe
        fsub dword ptr ds : [public_6fb7610]
        fst dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_6fb444c]
        fnstsw ax
        test ah, 0x41
        jne public_6ef11bf
        fld dword ptr ss : [esp+0x10]
        lea eax, ss:[esp+0x1C]
        fmul dword ptr ds : [public_6fb7608]
        push eax
        mov eax, dword ptr ss : [ebp+0x48]
        push 0x100
        lea ecx, ss:[esp+0x80]
        push ecx
        push ecx
        lea edx, ss:[esp+0x34]
        fstp dword ptr ss : [esp]
        push edx
        push eax
        call dword ptr ds : [public_6fb3398]
        mov eax, dword ptr ss : [esp+0x34]
        add esp, 0x18
        xor edi, edi
        test eax, eax
        jbe public_6ef11bf
        lea esi, ss:[esp+0x78]
        public_6ef1185 : nop
        mov eax, dword ptr ds : [esi]
        push eax
        mov ecx, ebp
        call public_6f72cb0
        test eax, eax
        je public_6ef11b3
        mov cl, byte ptr ds : [eax+0x12]
        test cl, cl
        jne public_6ef11a1
        mov cl, byte ptr ds : [eax+0x13]
        test cl, cl
        je public_6ef11b3
        public_6ef11a1 : nop
        push esi
        lea ecx, ss:[esp+0x68]
        push ecx
        mov ecx, dword ptr ss : [esp+0x4A0]
        call public_6f95e00
        public_6ef11b3 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        inc edi
        add esi, 4
        cmp edi, eax
        jb public_6ef1185
        public_6ef11bf : nop
        mov edi, dword ptr ss : [esp+0x498]
        mov esi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x488]
        mov ecx, dword ptr ss : [esp+0x30]
        push edi
        push esi
        lea edx, ss:[esp+0x2C]
        push edx
        push ebp
        push eax
        call public_6ef0f20
        mov edx, dword ptr ss : [esp+0x488]
        push edi
        push esi
        lea ecx, ss:[esp+0x2C]
        push ecx
        mov ecx, dword ptr ss : [esp+0x3C]
        push ebp
        push edx
        call public_6ef1240
        jmp public_6ef1200
        public_6ef11fe : nop
        fstp st(0)
        public_6ef1200 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x54]
        add eax, 4
        cmp eax, ecx
        mov dword ptr ss : [esp+0x18], eax
        jne public_6ef0fb6
        mov eax, dword ptr ss : [esp+0x50]
        pop edi
        pop esi
        public_6ef121d : nop
        push eax
        call public_6fa8fe0
        add esp, 4
        pop ebp
        pop ebx
        public_6ef1228 : nop
        mov ecx, dword ptr ss : [esp+0x468]
        mov dword ptr fs : [0], ecx
        add esp, 0x474
        ret 0x14
        UNREACHABLE_TRAP(0x6ef0f20)
    }
}

#undef public_6ef0fb6
#undef public_6ef1099
#undef public_6ef10bf
#undef public_6ef10cd
#undef public_6ef10f1
#undef public_6ef1185
#undef public_6ef11a1
#undef public_6ef11b3
#undef public_6ef11bf
#undef public_6ef11fe
#undef public_6ef1200
#undef public_6ef121d
#undef public_6ef1228
