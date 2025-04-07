#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4347e0);
CLANG_FORWARD_PROC_SYMBOL(public_4abdf0);
CLANG_FORWARD_PROC_SYMBOL(public_4ad600);
CLANG_FORWARD_PROC_SYMBOL(public_4aeab0);
CLANG_FORWARD_PROC_SYMBOL(public_4aebb0);
CLANG_FORWARD_PROC_SYMBOL(public_4aeca0);
CLANG_FORWARD_PROC_SYMBOL(public_4aed70);
CLANG_FORWARD_PROC_SYMBOL(public_4aee30);
CLANG_FORWARD_PROC_SYMBOL(public_4b2700);
CLANG_FORWARD_PROC_SYMBOL(public_5646e0);
CLANG_FORWARD_PROC_SYMBOL(public_575dc0);
CLANG_FORWARD_PROC_SYMBOL(public_59d960);

#define public_4adb24 _public_4adb24
#define public_4adb32 _public_4adb32
#define public_4adbc0 _public_4adbc0
#define public_4adbee _public_4adbee
#define public_4adc1c _public_4adc1c
#define public_4adc41 _public_4adc41
#define public_4adc4e _public_4adc4e
#define public_4adc66 _public_4adc66
#define public_4adc9e _public_4adc9e
#define public_4adcc7 _public_4adcc7
#define public_4adcd3 _public_4adcd3
#define public_4adcdf _public_4adcdf
#define public_4adce8 _public_4adce8
#define public_4adcf1 _public_4adcf1
#define public_4add60 _public_4add60
#define public_4add71 _public_4add71

PROC_DECLARE(0x4adac0, internal_4adac0, public_4adac0);
extern "C" NAKED register_t __cdecl internal_4adac0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x180
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x18C]
        push esi
        push ebp
        lea eax, ss:[esp+0x90]
/*FIXUP push offset public_5d50b4 @0x4adad8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d50b4
        push eax
        mov esi, ecx
        call dword ptr ds : [public_5c71ec]
        add esp, 0xC
        lea ecx, ss:[esp+0x8C]
        push ecx
        call dword ptr ds : [public_5c6f74]
        mov al, byte ptr ds : [esi+0x84C]
        test al, al
        je public_4adc66
        mov edx, dword ptr ss : [esp+0x194]
        test byte ptr ds : [edx], 2
        je public_4adb24
        call public_575dc0
        cmp ebp, 0x73
        jne public_4adb32
        cmp eax, 0x10
        jne public_4adbee
        public_4adb24 : nop
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x180
        ret 8
        public_4adb32 : nop
        cmp ebp, 0x2A
        je public_4adb24
        cmp ebp, 0x1B
        jne public_4adbee
        push esi
        mov byte ptr ds : [esi+0x84C], 0
        call public_59d960
        mov eax, dword ptr ds : [esi+0x4E8]
        mov dl, byte ptr ds : [eax+0x6C]
        mov bl, 0xFC
        and dl, bl
        mov byte ptr ds : [eax+0x6C], dl
        mov eax, dword ptr ds : [esi+0x4EC]
        and byte ptr ds : [eax+0x6C], bl
        mov eax, dword ptr ds : [esi+0x4F0]
        and byte ptr ds : [eax+0x6C], bl
        mov eax, dword ptr ds : [esi+0x4FC]
        and byte ptr ds : [eax+0x6C], bl
        mov eax, dword ptr ds : [esi+0x500]
        and byte ptr ds : [eax+0x6C], bl
        mov eax, dword ptr ds : [esi+0x4F4]
        and byte ptr ds : [eax+0x6C], bl
        mov eax, dword ptr ds : [esi+0x4F8]
        and byte ptr ds : [eax+0x6C], bl
        mov eax, dword ptr ds : [esi+0x4E4]
        mov cl, byte ptr ds : [eax+0x6C]
        and cl, bl
        add esp, 4
        mov byte ptr ds : [eax+0x6C], cl
        push 0
        mov ecx, esi
        call public_4abdf0
        lea eax, ds:[esi+0x484]
        mov edx, 0xD
        mov bl, 3
        lea ebx, ds:[ebx]
        public_4adbc0 : nop
        mov ecx, dword ptr ds : [eax-0x34]
        or byte ptr ds : [ecx+0x6C], bl
        mov ecx, dword ptr ds : [eax]
        or byte ptr ds : [ecx+0x6C], bl
        mov ecx, dword ptr ds : [eax-0x6C]
        or byte ptr ds : [ecx+0x6C], bl
        add eax, 4
        dec edx
        jne public_4adbc0
        mov esi, dword ptr ds : [esi+0x450]
        or byte ptr ds : [esi+0x6C], bl
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x180
        ret 8
        public_4adbee : nop
        mov ebx, dword ptr ds : [public_5c7280]
        push edi
        push 0x10
        xor edi, edi
        call ebx
        test ah, ah
        jns public_4adc1c
        mov edi, 1
        push edi
        push ebp
        mov ecx, esi
        call public_4ad600
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x180
        ret 8
        public_4adc1c : nop
        push 0x11
        call ebx
        test ah, ah
        jns public_4adc41
        mov edi, 4
        push edi
        push ebp
        mov ecx, esi
        call public_4ad600
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x180
        ret 8
        public_4adc41 : nop
        push 0x12
        call ebx
        test ah, ah
        jns public_4adc4e
        mov edi, 0x10
        public_4adc4e : nop
        push edi
        push ebp
        mov ecx, esi
        call public_4ad600
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x180
        ret 8
        public_4adc66 : nop
        mov eax, dword ptr ss : [esp+0x194]
        test byte ptr ds : [eax], 2
        je public_4adb24
        cmp ebp, 0x1B
        jne public_4adb24
        mov al, byte ptr ds : [esi+0x84A]
        test al, al
        je public_4adc9e
        mov ecx, esi
        call public_4b2700
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x180
        ret 8
        public_4adc9e : nop
        mov eax, dword ptr ds : [esi+0x7F4]
        cmp eax, 6
        je public_4add71
        cmp eax, 4
        mov dword ptr ds : [esi+0x7F8], 6
        ja public_4add60
/*FIXUP jmp dword ptr ds : [eax*4+public_4add98] @0x4adcc0*/
  JMPTB cmp eax, 0
  JMPTB je public_4adcc7
  JMPTB cmp eax, 1
  JMPTB je public_4adcd3
  JMPTB cmp eax, 2
  JMPTB je public_4adcdf
  JMPTB cmp eax, 3
  JMPTB je public_4adce8
  JMPTB cmp eax, 4
  JMPTB je public_4adcf1
  JMPTB int 3
        public_4adcc7 : nop
        mov ecx, esi
        call public_4aeab0
        jmp public_4add60
        public_4adcd3 : nop
        mov ecx, esi
        call public_4aebb0
        jmp public_4add60
        public_4adcdf : nop
        mov ecx, esi
        call public_4aeca0
        jmp public_4add60
        public_4adce8 : nop
        mov ecx, esi
        call public_4aed70
        jmp public_4add60
        public_4adcf1 : nop
        mov eax, dword ptr ds : [esi+0x7F0]
        mov cl, byte ptr ds : [eax+0x6C]
        mov bl, 0xFC
        and cl, bl
        mov byte ptr ds : [eax+0x6C], cl
        mov ecx, dword ptr ds : [esi+0x374]
        mov edx, dword ptr ds : [public_679bb0]
        push 0x40
        lea eax, ss:[esp+0x10]
        push eax
        mov dword ptr ds : [ecx+0x348], edx
        mov ecx, dword ptr ds : [public_67eca8]
        push 0x5E4
        push ecx
        call public_4347e0
        mov ecx, dword ptr ds : [esi+0x7B4]
        mov edx, dword ptr ds : [ecx]
        add esp, 0x10
        push 0
        lea eax, ss:[esp+0x10]
        push eax
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ds : [esi+0x7B0]
        and byte ptr ds : [eax+0x6C], bl
        mov eax, dword ptr ds : [esi+0x7B4]
        and byte ptr ds : [eax+0x6C], bl
        mov eax, dword ptr ds : [esi+0x344]
        and byte ptr ds : [eax+0x6C], bl
        public_4add60 : nop
        mov al, byte ptr ds : [esi+0x848]
        test al, al
        jne public_4add71
        mov ecx, esi
        call public_4aee30
        public_4add71 : nop
        push 0x1E
        call public_5646e0
        push 0x1F
        call public_5646e0
        push 0x20
        call public_5646e0
        add esp, 0xC
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x180
        ret 8
        UNREACHABLE_TRAP(0x4adac0)
        ASM_EXPORT_ENTRY_SINGLE(0x4adcf1, public_4adcf1)
    }
}

#undef public_4adb24
#undef public_4adb32
#undef public_4adbc0
#undef public_4adbee
#undef public_4adc1c
#undef public_4adc41
#undef public_4adc4e
#undef public_4adc66
#undef public_4adc9e
#undef public_4adcc7
#undef public_4adcd3
#undef public_4adcdf
#undef public_4adce8
#undef public_4adcf1
#undef public_4add60
#undef public_4add71

#pragma init_seg(compiler)
extern "C" void const* const public_4adcf1 = __AsmFindLabelExport(&internal_4adac0, 0x4adcf1);
